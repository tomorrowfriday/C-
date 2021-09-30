#include "castSpells.h"

int main() {
    float a = 5.32;
    int b = castFloatToInt(a);
    const int* c = &b;
    int d = 10;
    castToNonConstIntPtr(c);
    c = &d;
    cout << "a = " << castFloatToInt(a) << endl
         << "b = " << &b << endl
         << "c = " << &c << endl;

    return 0;
}
