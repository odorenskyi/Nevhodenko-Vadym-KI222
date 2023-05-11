#include <iostream>
#include <string>

int main() {
    std::string slovak_size;
    int french_size, international_size;

    // Введення розміру спідні за словацькою системою
    std::cout << "Enter the skirt size according to the Slovak system: "; //Введіть розмір спідні за словацькою системою
    std::cin >> slovak_size;

    // Визначення відповідника розміру у системі Франції
    if (slovak_size == "XS") {
        french_size = 36;
    } else if (slovak_size == "S") {
        french_size = 38;
    } else if (slovak_size == "M") {
        french_size = 40;
    } else if (slovak_size == "L") {
        french_size = 42;
    } else if (slovak_size == "XL") {
        french_size = 44;
    } else if (slovak_size == "XXL") {
        french_size = 46;
    } else {
        std::cout << "Incorrect skirt size" << std::endl; //Невірний розмір спідні
        return 1;
    }

    // Визначення відповідника розміру у міжнародній системі
    if (french_size >= 34 && french_size <= 36) {
        international_size = 1;
    } else if (french_size >= 37 && french_size <= 38) {
        international_size = 2;
    } else if (french_size == 39) {
        international_size = 3;
    } else if (french_size >= 40 && french_size <= 42) {
        international_size = 4;
    } else if (french_size >= 43 && french_size <= 44) {
        international_size = 5;
    } else if (french_size == 45) {
        international_size = 6;
    } else if (french_size == 46) {
        international_size = 7;
    } else {
        std::cout << "Incorrect skirt size" << std::endl; //Невірний розмір спідні
        return 1;
    }

    // Виведення результатів
    std::cout << "Size in the French system: " << french_size << std::endl; //Розмір у системі Франції
    std::cout << "Size in the international system: " << international_size << std::endl; //Розмір у міжнародній системі

    return 0;
}
