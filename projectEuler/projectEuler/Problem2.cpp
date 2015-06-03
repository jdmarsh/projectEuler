#include "Problem2.h"

unsigned p2::solve(unsigned maximum) {
    unsigned result = 0;

    unsigned previousValue = 1;
    unsigned fibonacciValue = 2;

    while (fibonacciValue <= maximum) {
        if (fibonacciValue % 2 == 0) {
            result += fibonacciValue;
        }
        unsigned temp = fibonacciValue;
        fibonacciValue = previousValue + fibonacciValue;
        previousValue = temp;
    }

    return result;
}
