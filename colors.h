
enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

extern const char* MajorColorNames[];
extern const char* MinorColorNames[];

extern const int MAX_COLORPAIR_NAME_CHARS;

extern int numberOfMajorColors;
extern int numberOfMinorColors;

void ColorPairToString(const ColorPair* colorPair, char* buffer);
int GetPairNumberFromColor(const ColorPair* colorPair);
ColorPair GetColorFromPairNumber(int pairNumber);
