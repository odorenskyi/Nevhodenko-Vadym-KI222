#include <iostream>
#include <fstream>
#include "ModulesNevhodenko.h"

int main() {
    std::ofstream outputFile("output.txt");

    // Введення значень x, y, z та b
    int x, y, z, b;
    std::cout << "Enter the value x: ";
    std::cin >> x;
    std::cout << "Enter the value y: ";
    std::cin >> y;
    std::cout << "Enter the value z: ";
    std::cin >> z;
    std::cout << "Enter a natural number b: ";
    std::cin >> b;

    // Виклик функції s_calculation
    int s_result = s_calculation(x, y, z);

    // Перетворення числа b в двійкову систему числення
    std::string binary = decimalToBinary(b);

    // Допис результатів до вихідного файлу
    outputFile << "Results of execution of function s_calculation with arguments x = " << x << ", y = " << y << ", z = " << z << ":\n";
    outputFile << "s_result = " << s_result << "\n\n";
    outputFile << "The number b in the binary number system: " << binary << "\n";

    std::cout << "The number b in the binary number systems output.txt'.\n";

    outputFile.close();
    return 0;
}
