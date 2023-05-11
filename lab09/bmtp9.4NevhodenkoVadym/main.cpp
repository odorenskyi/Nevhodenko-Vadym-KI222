#include <iostream>
#include <string>

using namespace std;

void s_calculation() {
    cout << "Function s_calculation called" << endl;
    // Додайте код для обчислення функції s_calculation тут

}

void task1() {
    cout << "Function task1 called" << endl;
    // Додайте код для обчислення функції task1 тут

void task2() {
    cout << "Function task2 called" << endl;
    // Додайте код для обчислення функції task2 тут
}

void task3() {
    cout << "Function task3 called" << endl;
    // Додайте код для обчислення функції task3 тут
}

int main() {
    char input;
    bool running = true;

    while (running) {
        cout << "Enter a character (v, n, m, q) or 'w' to exit: ";
        cin >> input;

        switch (input) {
            case 'v':
                s_calculation();
                break;
            case 'n':
                task1();
                break;
            case 'm':
                task2();
                break;
            case 'q':
                task3();
                break;
            case 'w':
            case 'W':
                running = false;
                break;
            default:
                cout << '\a'; // звуковий сигнал про помилкове введення
                break;
        }
    }

    return 0;
}
