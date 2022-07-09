#ifndef TCOLORPC_H
#define TCOLORPC_H

#include<stdio.h>

enum tColorPC_type
{
    TCOLORPC_UNSELECT=-1,

    TCOLORPC_METHOD_NORMAL=0,
    TCOLORPC_METHOD_HIGHLIGHT,
    TCOLORPC_METHOD_UNDERLINE,
    TCOLORPC_METHOD_REVERSE,

    TCOLORPC_FR_BLACK=30,
    TCOLORPC_FR_RED,
    TCOLORPC_FR_GREEN,
    TCOLORPC_FR_YELLOW,
    TCOLORPC_FR_BLUE,
    TCOLORPC_FR_FUCHSIA,
    TCOLORPC_FR_CYAN,
    TCOLORPC_FR_WHITE,

    TCOLORPC_BK_BLACK=40,
    TCOLORPC_BK_RED,
    TCOLORPC_BK_GREEN,
    TCOLORPC_BK_YELLOW,
    TCOLORPC_BK_BLUE,
    TCOLORPC_BK_FUCHSIA,
    TCOLORPC_BK_CYAN,
    TCOLORPC_BK_WHITE,
};


struct tColor
{
    enum tColorPC_type method;
    enum tColorPC_type foreColor;
    enum tColorPC_type backColor;
};

extern void printColor(struct tColor *tcolor);


#endif //TCOLORPC_H