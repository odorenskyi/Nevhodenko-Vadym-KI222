#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

// ������� ��� ��������� ������� ����� ":" � ������
int countColons(const std::string& sentence) {
    int count = 0;
    for (char c : sentence) {
        if (c == ':') {
            count++;
        }
    }
    return count;
}

// ������� ��� ��������, �� ������ � �������� ������
bool isVowel(char c) {
    c = std::tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// ������� ��� ��������� �������� ���� � �������
std::string removeVowels(const std::string& sentence) {
    std::string result = "";
    for (char c : sentence) {
        if (!isVowel(c)) {
            result += c;
        }
    }
    return result;
}

int main() {
    // ���������� ��� ����������
    std::string developerName = "Vadym";
    std::string developerSurname = "Nevhodenko";
    std::string institution = "Kropyvnytskyi";
    std::string country = "Ukraine";
    int developmentYear = 2023;

    // ������� ����� �������� �����
    std::ifstream inputFile("input.txt");
    std::string inputText;
    std::getline(inputFile, inputText);
    inputFile.close();

    // ϳ�������� ������� ����� ":" � ������
    int colonCount = countColons(inputText);

    // ����� ��������� ���������� �� ����� ���������� � �������� ����
    std::ofstream outputFile("output.txt");
    outputFile << "��������� ����������:\n";
    outputFile << "��'�: " << developerName << "\n";
    outputFile << "�������: " << developerSurname << "\n";
    outputFile << "��������/����������: " << institution << "\n";
    outputFile << "̳���: " << institution << "\n";
    outputFile << "����� ��������: " << country << "\n";
    outputFile << "г� ��������: " << developmentYear << "\n\n";
    outputFile << "ʳ������ ����� ':' � ������: " << colonCount << "\n\n";

    outputFile << "������� ��� �������� ����:\n";
    outputFile << removeVowels(inputText) << "\n";

    outputFile.close();

    std::cout << "The results were recorded in a file 'output.txt'.\n";

    return 0;
}
