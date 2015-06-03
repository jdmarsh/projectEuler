#include "Problem1.h"

unsigned p1::solve(unsigned maximum) {
    unsigned result = 0;
    for (unsigned index = 1; index < maximum; ++index) {
        if (index % 3 == 0 || index % 5 == 0) {
            result += index;
        }
    }
    return result;
}
