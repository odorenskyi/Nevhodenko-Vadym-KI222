#include "ModulesNevhodenko.h"
#include <string>

int s_calculation(int x, int y, int z) {
    return (x + y) * z;
}

std::string decimalToBinary(int decimal) {
    if (decimal == 0) {
        return "0";
    }

    std::string binary;
    while (decimal > 0) {
        binary = std::to_string(decimal % 2) + binary;
        decimal /= 2;
    }

    return binary;
}
