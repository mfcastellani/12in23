#include "armstrong_numbers.h"
#include <math.h>

bool is_armstrong_number(int candidate) {
    if (candidate == 0) return true;

    int length = (int)log10(candidate) + 1;
    int sum = 0;

    for (int d = pow(10, length); d > 1; d /= 10) {
        int digit = candidate % d / (d / 10);
        sum += pow(digit, length);
    }

    return sum == candidate;
}
