#include "Utilities.h"
#include <cmath>

bool utils::isPrime(unsigned value) {
    if (value < 2) {
        return false;
    }

    unsigned limit = std::ceil(std::sqrtf(value));
    for (unsigned index = 2; index < value && index < limit; ++index) {
        if (value % index == 0) {
            return false;
        }
    }
    return true;
}
