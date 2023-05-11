#include <iostream>
#include <cmath>

int main() {
    double deposit_amount, interest_rate, total_interest, monthly_interest, monthly_payment;
    int deposit_months;

    // �������� ����� �����������
    std::cout << "Enter the deposit amount: "; //������ ���� ��������
    std::cin >> deposit_amount;
    std::cout << "Enter the term of the contract in months: "; //������ ����� 䳿 �������� � ������
    std::cin >> deposit_months;

    // ���������� ���� ������ �������
    if (deposit_months < 6) {
        interest_rate = 0.11;
    } else {
        interest_rate = 0.13;
    }

    // ���������� �������� ���� �������
    total_interest = deposit_amount * std::pow(1 + interest_rate, deposit_months / 12.0) - deposit_amount;

    // ���������� �������� ���� ������� �� ���������� �������
    monthly_interest = deposit_amount * interest_rate / 12.0;
    monthly_payment = (deposit_amount + total_interest) / deposit_months;

    // ��������� ����������
    std::cout << "Monthly interest amount: " << monthly_interest << " UAH " << std::endl; //̳����� ���� �������
    std::cout << "Total amount of interest: " << total_interest << " UAH " << std::endl; //�������� ���� �������
    std::cout << "Monthly payment: " << monthly_payment << " UAH " << std::endl; //�������� ������


    return 0;
}
