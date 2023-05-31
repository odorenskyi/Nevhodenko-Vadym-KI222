#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

// Функція для підрахунку кількості знаків ":" у реченні
int countColons(const std::string& sentence) {
    int count = 0;
    for (char c : sentence) {
        if (c == ':') {
            count++;
        }
    }
    return count;
}

// Функція для перевірки, чи символ є голосною літерою
bool isVowel(char c) {
    c = std::tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Функція для видалення голосних літер з речення
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
    // Інформація про розробника
    std::string developerName = "Vadym";
    std::string developerSurname = "Nevhodenko";
    std::string institution = "Kropyvnytskyi";
    std::string country = "Ukraine";
    int developmentYear = 2023;

    // Читання вмісту вхідного файлу
    std::ifstream inputFile("input.txt");
    std::string inputText;
    std::getline(inputFile, inputText);
    inputFile.close();

    // Підрахунок кількості знаків ":" у реченні
    int colonCount = countColons(inputText);

    // Запис авторської інформації та інших результатів у вихідний файл
    std::ofstream outputFile("output.txt");
    outputFile << "Авторська інформація:\n";
    outputFile << "Ім'я: " << developerName << "\n";
    outputFile << "Прізвище: " << developerSurname << "\n";
    outputFile << "Установа/організація: " << institution << "\n";
    outputFile << "Місто: " << institution << "\n";
    outputFile << "Країна розробки: " << country << "\n";
    outputFile << "Рік розробки: " << developmentYear << "\n\n";
    outputFile << "Кількість знаків ':' у реченні: " << colonCount << "\n\n";

    outputFile << "Речення без голосних літер:\n";
    outputFile << removeVowels(inputText) << "\n";

    outputFile.close();

    std::cout << "The results were recorded in a file 'output.txt'.\n";

    return 0;
}
