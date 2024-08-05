#include <stdio.h>
#include <assert.h>
#include "color_pair.h"

void testNumberToPair(int pairNumber, const char* expectedMajor, const char* expectedMinor) {
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(strcmp(colorPair.majorColor, expectedMajor) == 0);
    assert(strcmp(colorPair.minorColor, expectedMinor) == 0);
}

void testPairToNumber(const char* major, const char* minor, int expectedPairNumber) {
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}

void runTests() {
    testNumberToPair(4, "White", "Brown");
    testNumberToPair(5, "White", "Slate");
    testPairToNumber("Black", "Orange", 12);
    testPairToNumber("Violet", "Slate", 25);

    printf("All tests passed!\n");
}

