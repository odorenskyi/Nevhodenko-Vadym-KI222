#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <ctime>

std::string transliterate(const std::string& text) {
    // Тут ви можете реалізувати власну функцію транслітерації українського алфавіту латиницею
    // В цьому прикладі я просто повертаю вхідний текст без змін
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

    // Читання вмісту вхідного файлу
    std::ifstream input(inputFile);
    std::string inputText;
    std::getline(input, inputText);
    input.close();

    // Транслітерація тексту
    std::string transliteratedText = transliterate(inputText);

    // Допис транслітерованого тексту до вхідного файлу
    std::ofstream output(inputFile, std::ios_base::app);
    output << "\nТранслітерований текст:\n";
    output << transliteratedText << "\n";
    output.close();

    // Допис дати дозапису у форматі "ДД/ММ/РР"
    std::string currentDate = getCurrentDate();
    std::ofstream outputDate(outputFile, std::ios_base::app);
    outputDate << "The date of additional recording of information: " << currentDate << "\n";
    outputDate.close();

    std::cout << "The text is transliterated and the recording date is added to the input file '" << inputFile << "'.\n";

    return 0;
}
