#include <stdio.h>
#include <assert.h>
#include "colors.h"

void testNumberToPair(int pairNumber,
    enum MajorColor expectedMajor,
    enum MinorColor expectedMinor)
{
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}

void testPairToNumber(
    enum MajorColor major,
    enum MinorColor minor,
    int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}

void printColorCoding()
{
    ColorPair colorPair;
	enum MajorColor major;
    enum MinorColor minor;
	int pairNumber = 0;
	char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
	
	for (major = 0; major < numberOfMajorColors; major++)
	{
		for (minor = 0; minor < numberOfMinorColors; minor++)
		{
			colorPair.majorColor = major;
			colorPair.minorColor = minor;
			pairNumber = GetPairNumberFromColor(&colorPair);
			ColorPairToString(&colorPair, colorPairNames);
			printf("%s is %d\n", colorPairNames, pairNumber);
		}
	}
}

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    
    printColorCoding();

    return 0;
}
