#include <iostream>
#include <fstream>
#include "ModulesNevhodenko.h"

int main() {
    std::ofstream outputFile("output.txt");

    // �������� ������� x, y, z �� b
    int x, y, z, b;
    std::cout << "Enter the value x: ";
    std::cin >> x;
    std::cout << "Enter the value y: ";
    std::cin >> y;
    std::cout << "Enter the value z: ";
    std::cin >> z;
    std::cout << "Enter a natural number b: ";
    std::cin >> b;

    // ������ ������� s_calculation
    int s_result = s_calculation(x, y, z);

    // ������������ ����� b � ������� ������� ��������
    std::string binary = decimalToBinary(b);

    // ����� ���������� �� ��������� �����
    outputFile << "Results of execution of function s_calculation with arguments x = " << x << ", y = " << y << ", z = " << z << ":\n";
    outputFile << "s_result = " << s_result << "\n\n";
    outputFile << "The number b in the binary number system: " << binary << "\n";

    std::cout << "The number b in the binary number systems output.txt'.\n";

    outputFile.close();
    return 0;
}
