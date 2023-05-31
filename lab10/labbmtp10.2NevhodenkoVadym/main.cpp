#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <ctime>

std::string transliterate(const std::string& text) {
    // ��� �� ������ ���������� ������ ������� ������������� ����������� ������� ���������
    // � ����� ������� � ������ �������� ������� ����� ��� ���
    return text;
}

std::string getCurrentDate() {
    auto now = std::chrono::system_clock::now();
    std::time_t time = std::chrono::system_clock::to_time_t(now);
    std::tm* currentTime = std::localtime(&time);

    char buffer[11];
    std::strftime(buffer, sizeof(buffer), "%d/%m/%Y", currentTime);

    return std::string(buffer);
}

int main() {
    std::string inputFile = "input.txt";
    std::string outputFile = "output.txt";

    // ������� ����� �������� �����
    std::ifstream input(inputFile);
    std::string inputText;
    std::getline(input, inputText);
    input.close();

    // ������������� ������
    std::string transliteratedText = transliterate(inputText);

    // ����� ���������������� ������ �� �������� �����
    std::ofstream output(inputFile, std::ios_base::app);
    output << "\n��������������� �����:\n";
    output << transliteratedText << "\n";
    output.close();

    // ����� ���� �������� � ������ "��/��/��"
    std::string currentDate = getCurrentDate();
    std::ofstream outputDate(outputFile, std::ios_base::app);
    outputDate << "The date of additional recording of information: " << currentDate << "\n";
    outputDate.close();

    std::cout << "The text is transliterated and the recording date is added to the input file '" << inputFile << "'.\n";

    return 0;
}
