#include "functions.h"

unsigned factorial_cycle(unsigned num) {
    unsigned new_num = 1;
    if (num == 0)
        return 1;
    for (int i = 1; i <= num; ++i)
        new_num *= i;
    return new_num;
}

unsigned factorial_recursion(unsigned num) {
    if (num == 0)
        return 1;
    else
        return num * factorial_recursion(num - 1);
}
