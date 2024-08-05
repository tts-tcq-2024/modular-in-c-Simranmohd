#include <stdio.h>
#include "color_pair.h"
#include "color_mapping.h"

void printColorCodeManual() {
    printf("Color Code Manual:\n");
    for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; i++) {
        ColorPair colorPair = GetColorFromPairNumber(i);
        char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
        ColorPairToString(&colorPair, colorPairNames);
        printf("%2d | %s\n", i, colorPairNames);
    }
}

