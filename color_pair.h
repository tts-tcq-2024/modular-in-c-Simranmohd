#ifndef COLOR_PAIR_H
#define COLOR_PAIR_H

#define MAX_COLORPAIR_NAME_CHARS 16

typedef struct {
    const char* majorColor;
    const char* minorColor;
} ColorPair;

void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);

#endif // COLOR_PAIR_H

