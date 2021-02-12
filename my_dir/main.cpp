#include <iostream>
#include "functions.h"

int main() {
    unsigned num;
    char type_of_func;
    std::cout << "Enter the num for factorial:\t";
    std::cin >> num;
    std::cout << "How u want count factorial? (cycle - c, recursion - r)\t";
    std::cin >> type_of_func;
    if (type_of_func == 'c')
        std::cout << "Cycle factorial: " << factorial_cycle(num) << std::endl;
    else
        std::cout << "Recursion factorial: " << factorial_recursion(num) << std::endl;
    return 0;
}
