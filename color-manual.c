
#include <stdio.h>
#include "colors.h"

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