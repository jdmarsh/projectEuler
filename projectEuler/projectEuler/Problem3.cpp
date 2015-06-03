#include "Problem3.h"
#include "Utilities.h"
#include <cmath>
#include <iostream>

unsigned long long p3::solve(unsigned long long value) {
    for (unsigned long long index = 2; index < value; ++index) {
        if (value % index == 0) {
            unsigned long long factor = std::round(value / index);
            if (utils::isPrime(factor)) {
                return factor;
            }
        }
    }

    return 0;
}
