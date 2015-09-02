#ifndef CCH_FOR_MACRO_HPP
#define CCH_FOR_MACRO_HPP
#include "PP_NARG.hpp"

#define _CAT(a, b) a ## b
#define CAT(a, b) _CAT(a, b)
#define CCH_EXPAND(...) __VA_ARGS__

#define CCH_FOR_0(M, D, ...)
#define CCH_FOR_1(M, D, _1, ...) M(_1, D, 1)
#define CCH_FOR_2(M, D, _1, _2, ...) M(_1, D, 1) M(_2, D, 2)
#define CCH_FOR_3(M, D, _1, _2, _3, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3)
#define CCH_FOR_4(M, D, _1, _2, _3, _4, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4)
#define CCH_FOR_5(M, D, _1, _2, _3, _4, _5, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5)
#define CCH_FOR_6(M, D, _1, _2, _3, _4, _5, _6, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6)
#define CCH_FOR_7(M, D, _1, _2, _3, _4, _5, _6, _7, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7)
#define CCH_FOR_8(M, D, _1, _2, _3, _4, _5, _6, _7, _8, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8)
#define CCH_FOR_9(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9)
#define CCH_FOR_10(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10)
#define CCH_FOR_11(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11)
#define CCH_FOR_12(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12)
#define CCH_FOR_13(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13)
#define CCH_FOR_14(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14)
#define CCH_FOR_15(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15)
#define CCH_FOR_16(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16)
#define CCH_FOR_17(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17)
#define CCH_FOR_18(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18)
#define CCH_FOR_19(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19)
#define CCH_FOR_20(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20)
#define CCH_FOR_21(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21)
#define CCH_FOR_22(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22)
#define CCH_FOR_23(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23)
#define CCH_FOR_24(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24)
#define CCH_FOR_25(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25)
#define CCH_FOR_26(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26)
#define CCH_FOR_27(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27)
#define CCH_FOR_28(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28)
#define CCH_FOR_29(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29)
#define CCH_FOR_30(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30)
#define CCH_FOR_31(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31)
#define CCH_FOR_32(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32)
#define CCH_FOR_33(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33)
#define CCH_FOR_34(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34)
#define CCH_FOR_35(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35)
#define CCH_FOR_36(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36)
#define CCH_FOR_37(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36) M(_37, D, 37)
#define CCH_FOR_38(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36) M(_37, D, 37) M(_38, D, 38)
#define CCH_FOR_39(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36) M(_37, D, 37) M(_38, D, 38) M(_39, D, 39)
#define CCH_FOR_40(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36) M(_37, D, 37) M(_38, D, 38) M(_39, D, 39) M(_40, D, 40)
#define CCH_FOR_41(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36) M(_37, D, 37) M(_38, D, 38) M(_39, D, 39) M(_40, D, 40) M(_41, D, 41)
#define CCH_FOR_42(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36) M(_37, D, 37) M(_38, D, 38) M(_39, D, 39) M(_40, D, 40) M(_41, D, 41) M(_42, D, 42)
#define CCH_FOR_43(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36) M(_37, D, 37) M(_38, D, 38) M(_39, D, 39) M(_40, D, 40) M(_41, D, 41) M(_42, D, 42) M(_43, D, 43)
#define CCH_FOR_44(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36) M(_37, D, 37) M(_38, D, 38) M(_39, D, 39) M(_40, D, 40) M(_41, D, 41) M(_42, D, 42) M(_43, D, 43) M(_44, D, 44)
#define CCH_FOR_45(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36) M(_37, D, 37) M(_38, D, 38) M(_39, D, 39) M(_40, D, 40) M(_41, D, 41) M(_42, D, 42) M(_43, D, 43) M(_44, D, 44) M(_45, D, 45)
#define CCH_FOR_46(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36) M(_37, D, 37) M(_38, D, 38) M(_39, D, 39) M(_40, D, 40) M(_41, D, 41) M(_42, D, 42) M(_43, D, 43) M(_44, D, 44) M(_45, D, 45) M(_46, D, 46)
#define CCH_FOR_47(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36) M(_37, D, 37) M(_38, D, 38) M(_39, D, 39) M(_40, D, 40) M(_41, D, 41) M(_42, D, 42) M(_43, D, 43) M(_44, D, 44) M(_45, D, 45) M(_46, D, 46) M(_47, D, 47)
#define CCH_FOR_48(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36) M(_37, D, 37) M(_38, D, 38) M(_39, D, 39) M(_40, D, 40) M(_41, D, 41) M(_42, D, 42) M(_43, D, 43) M(_44, D, 44) M(_45, D, 45) M(_46, D, 46) M(_47, D, 47) M(_48, D, 48)
#define CCH_FOR_49(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36) M(_37, D, 37) M(_38, D, 38) M(_39, D, 39) M(_40, D, 40) M(_41, D, 41) M(_42, D, 42) M(_43, D, 43) M(_44, D, 44) M(_45, D, 45) M(_46, D, 46) M(_47, D, 47) M(_48, D, 48) M(_49, D, 49)
#define CCH_FOR_50(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36) M(_37, D, 37) M(_38, D, 38) M(_39, D, 39) M(_40, D, 40) M(_41, D, 41) M(_42, D, 42) M(_43, D, 43) M(_44, D, 44) M(_45, D, 45) M(_46, D, 46) M(_47, D, 47) M(_48, D, 48) M(_49, D, 49) M(_50, D, 50)
#define CCH_FOR_51(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36) M(_37, D, 37) M(_38, D, 38) M(_39, D, 39) M(_40, D, 40) M(_41, D, 41) M(_42, D, 42) M(_43, D, 43) M(_44, D, 44) M(_45, D, 45) M(_46, D, 46) M(_47, D, 47) M(_48, D, 48) M(_49, D, 49) M(_50, D, 50) M(_51, D, 51)
#define CCH_FOR_52(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36) M(_37, D, 37) M(_38, D, 38) M(_39, D, 39) M(_40, D, 40) M(_41, D, 41) M(_42, D, 42) M(_43, D, 43) M(_44, D, 44) M(_45, D, 45) M(_46, D, 46) M(_47, D, 47) M(_48, D, 48) M(_49, D, 49) M(_50, D, 50) M(_51, D, 51) M(_52, D, 52)
#define CCH_FOR_53(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36) M(_37, D, 37) M(_38, D, 38) M(_39, D, 39) M(_40, D, 40) M(_41, D, 41) M(_42, D, 42) M(_43, D, 43) M(_44, D, 44) M(_45, D, 45) M(_46, D, 46) M(_47, D, 47) M(_48, D, 48) M(_49, D, 49) M(_50, D, 50) M(_51, D, 51) M(_52, D, 52) M(_53, D, 53)
#define CCH_FOR_54(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36) M(_37, D, 37) M(_38, D, 38) M(_39, D, 39) M(_40, D, 40) M(_41, D, 41) M(_42, D, 42) M(_43, D, 43) M(_44, D, 44) M(_45, D, 45) M(_46, D, 46) M(_47, D, 47) M(_48, D, 48) M(_49, D, 49) M(_50, D, 50) M(_51, D, 51) M(_52, D, 52) M(_53, D, 53) M(_54, D, 54)
#define CCH_FOR_55(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36) M(_37, D, 37) M(_38, D, 38) M(_39, D, 39) M(_40, D, 40) M(_41, D, 41) M(_42, D, 42) M(_43, D, 43) M(_44, D, 44) M(_45, D, 45) M(_46, D, 46) M(_47, D, 47) M(_48, D, 48) M(_49, D, 49) M(_50, D, 50) M(_51, D, 51) M(_52, D, 52) M(_53, D, 53) M(_54, D, 54) M(_55, D, 55)
#define CCH_FOR_56(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36) M(_37, D, 37) M(_38, D, 38) M(_39, D, 39) M(_40, D, 40) M(_41, D, 41) M(_42, D, 42) M(_43, D, 43) M(_44, D, 44) M(_45, D, 45) M(_46, D, 46) M(_47, D, 47) M(_48, D, 48) M(_49, D, 49) M(_50, D, 50) M(_51, D, 51) M(_52, D, 52) M(_53, D, 53) M(_54, D, 54) M(_55, D, 55) M(_56, D, 56)
#define CCH_FOR_57(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36) M(_37, D, 37) M(_38, D, 38) M(_39, D, 39) M(_40, D, 40) M(_41, D, 41) M(_42, D, 42) M(_43, D, 43) M(_44, D, 44) M(_45, D, 45) M(_46, D, 46) M(_47, D, 47) M(_48, D, 48) M(_49, D, 49) M(_50, D, 50) M(_51, D, 51) M(_52, D, 52) M(_53, D, 53) M(_54, D, 54) M(_55, D, 55) M(_56, D, 56) M(_57, D, 57)
#define CCH_FOR_58(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36) M(_37, D, 37) M(_38, D, 38) M(_39, D, 39) M(_40, D, 40) M(_41, D, 41) M(_42, D, 42) M(_43, D, 43) M(_44, D, 44) M(_45, D, 45) M(_46, D, 46) M(_47, D, 47) M(_48, D, 48) M(_49, D, 49) M(_50, D, 50) M(_51, D, 51) M(_52, D, 52) M(_53, D, 53) M(_54, D, 54) M(_55, D, 55) M(_56, D, 56) M(_57, D, 57) M(_58, D, 58)
#define CCH_FOR_59(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36) M(_37, D, 37) M(_38, D, 38) M(_39, D, 39) M(_40, D, 40) M(_41, D, 41) M(_42, D, 42) M(_43, D, 43) M(_44, D, 44) M(_45, D, 45) M(_46, D, 46) M(_47, D, 47) M(_48, D, 48) M(_49, D, 49) M(_50, D, 50) M(_51, D, 51) M(_52, D, 52) M(_53, D, 53) M(_54, D, 54) M(_55, D, 55) M(_56, D, 56) M(_57, D, 57) M(_58, D, 58) M(_59, D, 59)
#define CCH_FOR_60(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36) M(_37, D, 37) M(_38, D, 38) M(_39, D, 39) M(_40, D, 40) M(_41, D, 41) M(_42, D, 42) M(_43, D, 43) M(_44, D, 44) M(_45, D, 45) M(_46, D, 46) M(_47, D, 47) M(_48, D, 48) M(_49, D, 49) M(_50, D, 50) M(_51, D, 51) M(_52, D, 52) M(_53, D, 53) M(_54, D, 54) M(_55, D, 55) M(_56, D, 56) M(_57, D, 57) M(_58, D, 58) M(_59, D, 59) M(_60, D, 60)
#define CCH_FOR_61(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36) M(_37, D, 37) M(_38, D, 38) M(_39, D, 39) M(_40, D, 40) M(_41, D, 41) M(_42, D, 42) M(_43, D, 43) M(_44, D, 44) M(_45, D, 45) M(_46, D, 46) M(_47, D, 47) M(_48, D, 48) M(_49, D, 49) M(_50, D, 50) M(_51, D, 51) M(_52, D, 52) M(_53, D, 53) M(_54, D, 54) M(_55, D, 55) M(_56, D, 56) M(_57, D, 57) M(_58, D, 58) M(_59, D, 59) M(_60, D, 60) M(_61, D, 61)
#define CCH_FOR_62(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36) M(_37, D, 37) M(_38, D, 38) M(_39, D, 39) M(_40, D, 40) M(_41, D, 41) M(_42, D, 42) M(_43, D, 43) M(_44, D, 44) M(_45, D, 45) M(_46, D, 46) M(_47, D, 47) M(_48, D, 48) M(_49, D, 49) M(_50, D, 50) M(_51, D, 51) M(_52, D, 52) M(_53, D, 53) M(_54, D, 54) M(_55, D, 55) M(_56, D, 56) M(_57, D, 57) M(_58, D, 58) M(_59, D, 59) M(_60, D, 60) M(_61, D, 61) M(_62, D, 62)
#define CCH_FOR_63(M, D, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, ...) M(_1, D, 1) M(_2, D, 2) M(_3, D, 3) M(_4, D, 4) M(_5, D, 5) M(_6, D, 6) M(_7, D, 7) M(_8, D, 8) M(_9, D, 9) M(_10, D, 10) M(_11, D, 11) M(_12, D, 12) M(_13, D, 13) M(_14, D, 14) M(_15, D, 15) M(_16, D, 16) M(_17, D, 17) M(_18, D, 18) M(_19, D, 19) M(_20, D, 20) M(_21, D, 21) M(_22, D, 22) M(_23, D, 23) M(_24, D, 24) M(_25, D, 25) M(_26, D, 26) M(_27, D, 27) M(_28, D, 28) M(_29, D, 29) M(_30, D, 30) M(_31, D, 31) M(_32, D, 32) M(_33, D, 33) M(_34, D, 34) M(_35, D, 35) M(_36, D, 36) M(_37, D, 37) M(_38, D, 38) M(_39, D, 39) M(_40, D, 40) M(_41, D, 41) M(_42, D, 42) M(_43, D, 43) M(_44, D, 44) M(_45, D, 45) M(_46, D, 46) M(_47, D, 47) M(_48, D, 48) M(_49, D, 49) M(_50, D, 50) M(_51, D, 51) M(_52, D, 52) M(_53, D, 53) M(_54, D, 54) M(_55, D, 55) M(_56, D, 56) M(_57, D, 57) M(_58, D, 58) M(_59, D, 59) M(_60, D, 60) M(_61, D, 61) M(_62, D, 62) M(_63, D, 63)

#define CCH_FOR_N_(M, D, X, ...) X(M, D, __VA_ARGS__)
#define CCH_FOR(M, D, ...) CCH_FOR_N_(M, D, CAT(CCH_FOR_, PP_NARG(__VA_ARGS__)), __VA_ARGS__)

#endif /* JLSS_ID_NARG_H */