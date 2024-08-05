#include <stdio.h>
#include <string.h>
#include "color_pair.h"
#include "color_mapping.h"

void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    snprintf(buffer, MAX_COLORPAIR_NAME_CHARS, "%s %s", colorPair->majorColor, colorPair->minorColor);
}

ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = majorColorNames[zeroBasedPairNumber / numberOfMinorColors];
    colorPair.minorColor = minorColorNames[zeroBasedPairNumber % numberOfMinorColors];
    return colorPair;
}

int GetPairNumberFromColor(const ColorPair* colorPair) {
    int majorIndex = -1;
    int minorIndex = -1;
    for (int i = 0; i < numberOfMajorColors; i++) {
        if (strcmp(majorColorNames[i], colorPair->majorColor) == 0) {
            majorIndex = i;
            break;
        }
    }
    for (int i = 0; i < numberOfMinorColors; i++) {
        if (strcmp(minorColorNames[i], colorPair->minorColor) == 0) {
            minorIndex = i;
            break;
        }
    }
    return (majorIndex * numberOfMinorColors) + (minorIndex + 1);
}

