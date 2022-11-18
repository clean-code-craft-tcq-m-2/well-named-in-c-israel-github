
#include <stdio.h>
#include <assert.h>
#include "colors.h"
#include "color-test.h"
#include "color-manual.h"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

	printColorCoding();

    return 0;
}
