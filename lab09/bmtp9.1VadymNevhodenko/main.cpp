#include <iostream>
#include <cmath>

int main() {
    double deposit_amount, interest_rate, total_interest, monthly_interest, monthly_payment;
    int deposit_months;

    // Введення даних користувача
    std::cout << "Enter the deposit amount: "; //Введіть суму депозиту
    std::cin >> deposit_amount;
    std::cout << "Enter the term of the contract in months: "; //Введіть термін дії договору в місяцях
    std::cin >> deposit_months;

    // Визначення річної ставки відсотків
    if (deposit_months < 6) {
        interest_rate = 0.11;
    } else {
        interest_rate = 0.13;
    }

    // Обчислення загальної суми відсотків
    total_interest = deposit_amount * std::pow(1 + interest_rate, deposit_months / 12.0) - deposit_amount;

    // Обчислення щомісячної суми відсотків та щомісячного платежу
    monthly_interest = deposit_amount * interest_rate / 12.0;
    monthly_payment = (deposit_amount + total_interest) / deposit_months;

    // Виведення результатів
    std::cout << "Monthly interest amount: " << monthly_interest << " UAH " << std::endl; //Місячна сума відсотків
    std::cout << "Total amount of interest: " << total_interest << " UAH " << std::endl; //Загальна сума відсотків
    std::cout << "Monthly payment: " << monthly_payment << " UAH " << std::endl; //Щомісячна оплата


    return 0;
}
