//
//  uiButtonLayouts.cpp
//  GodRage-Endless-Revamp
//
//  Created by Vinova on 4/22/15.
//
//

#include "LayoutRegistration.h"
#include "WidgetUtils.h"
#include "ui/CocosGUI.h"

namespace ccHelp {
    struct _Button : public ui::Button
    {
        void setTitleRenderer(Label *lbl)
        {
            if (!lbl)
                return;
            
            if (_titleRenderer)
                _titleRenderer->removeFromParent();
            
            if (lbl->getParent() != this)
            {
                lbl->removeFromParent();
                this->addProtectedChild(lbl);
            }
            
            this->_titleRenderer = lbl;
        }
        
        Node *getNormalRenderer()
        {
            return _buttonNormalRenderer;
        }
    };
    
    void regisButtonLayouts()
    {
        auto *titleText = new FunctionLayout([](Node *n, const Layout::Parameter &p) {
            if (p.isString())
            {
                if (ui::Button *btn = dynamic_cast<ui::Button*>(n))
                {
                    btn->setTitleText(p.asString());
                }
            }
        });
        GroupLayout::registerLayout("button-title-text", titleText);
        
        
        auto *titleFontSize = new FunctionLayout([](Node *n, const Layout::Parameter &p) {
            if (p.isNumeric())
            {
                if (ui::Button *btn = dynamic_cast<ui::Button*>(n))
                {
                    btn->setTitleFontSize(p.asFloat());
                }
            }
        });
        GroupLayout::registerLayout("button-title-size", titleFontSize);
        
        auto *titleFontName = new FunctionLayout([](Node *n, const Layout::Parameter &p) {
            if (p.isString())
            {
                if (ui::Button *btn = dynamic_cast<ui::Button*>(n))
                {
                    btn->setTitleFontName(p.asString());
                }
            }
        });
        GroupLayout::registerLayout("button-title-font", titleFontName);
        
        
        auto *titleColor = new FunctionLayout([](Node *n, const Layout::Parameter &p) {
            if (!p.isString())
                return;
            
            ui::Button *btn = dynamic_cast<ui::Button*>(n);
            if (!btn)
                return;
            
            Color3B c;
            if (!LayoutHelper::asColor3(p, c))
                return;
            
            btn->setTitleColor(c);
        });
        GroupLayout::registerLayout("button-title-color", titleColor);
        
        auto *loadNormalTexture = new FunctionLayout([](Node *n, const Layout::Parameter &p) {
            ui::Button *btn = dynamic_cast<ui::Button*>(n);
            if (!btn)
                return;
            
            if (p.isString())
            {
                btn->loadTextureNormal(p.asString());
            }
            else if (p.isObject())
            {
                if (!p.isMember("texture") || !p["texture"].isString())
                    return;
                
                string tex = p["texture"].asString();
                
                auto resType = ui::TextureResType::LOCAL;
                LayoutHelper::asUIResType(p["res-type"], resType);
                
                btn->loadTextureNormal(tex, resType);
            }
        });
        GroupLayout::registerLayout("button-normal", loadNormalTexture);
        
        
        auto *loadPressedTexture = new FunctionLayout([](Node *n, const Layout::Parameter &p) {
            ui::Button *btn = dynamic_cast<ui::Button*>(n);
            if (!btn)
                return;
            
            if (p.isString())
            {
                btn->loadTexturePressed(p.asString());
            }
            else if (p.isObject())
            {
                if (!p.isMember("texture") || !p["texture"].isString())
                    return;
                
                string tex = p["texture"].asString();
                
                auto resType = ui::TextureResType::LOCAL;
                LayoutHelper::asUIResType(p["res-type"], resType);
                
                btn->loadTexturePressed(tex, resType);
            }
        });
        GroupLayout::registerLayout("button-pressed", loadPressedTexture);
        
        auto *loadDisabledTexture = new FunctionLayout([](Node *n, const Layout::Parameter &p) {
            ui::Button *btn = dynamic_cast<ui::Button*>(n);
            if (!btn)
                return;
            
            if (p.isString())
            {
                btn->loadTextureDisabled(p.asString());
            }
            else if (p.isObject())
            {
                if (!p.isMember("texture") || !p["texture"].isString())
                    return;
                
                string tex = p["texture"].asString();
                
                auto resType = ui::TextureResType::LOCAL;
                LayoutHelper::asUIResType(p["res-type"], resType);
                
                btn->loadTextureDisabled(tex, resType);
            }
        });
        GroupLayout::registerLayout("button-disabled", loadDisabledTexture);

        auto *setTitleRenderer = new FunctionLayout([](Node *n, const Layout::Parameter &p) {
            if (!p.isString())
                return;
            
            ui::Button *btn = dynamic_cast<ui::Button*>(n);
            if (!btn)
                return;
            
            Label *lbl = LayoutHelper::query<Label>(n, p.asString());
            if (!lbl)
                return;
            
            ((_Button *) btn)->setTitleRenderer(lbl);
        });
        GroupLayout::registerLayout("button-title-renderer!", setTitleRenderer);
        
        auto *pressedEnabled = new FunctionLayout([](Node *n, const Layout::Parameter &p) {
            bool isEnabled = false;
            if (!Json::type::deserialize(p, isEnabled))
                return;
            
            ui::Button *btn = dynamic_cast<ui::Button*>(n);
            if (!btn)
                return;
            
            btn->setPressedActionEnabled(isEnabled);
        });
        GroupLayout::registerLayout("button-pressed-enabled", pressedEnabled);
        
        auto *setZoomScale = new FunctionLayout([](Node *n, const Layout::Parameter &p) {
            float zoomScale = 1;
            if (!LayoutHelper::asFloat(p, zoomScale))
                return;
            
            ui::Button *btn = dynamic_cast<ui::Button*>(n);
            if (!btn)
                return;
            
            btn->setZoomScale(zoomScale);
        });
        GroupLayout::registerLayout("button-zoom-scale", setZoomScale);
    }
    
    void regisButtonQueries()
    {
        LayoutHelper::putQuery("@button-normal", [](Node *n) -> Node* {
            ui::Button *btn = dynamic_cast<ui::Button*>(n);
            if (!btn)
                return nullptr;
            
            return ((_Button *) btn)->getNormalRenderer();
        });
    }
}