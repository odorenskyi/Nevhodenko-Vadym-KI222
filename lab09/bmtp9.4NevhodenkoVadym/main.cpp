#include <iostream>
#include <string>

using namespace std;

void s_calculation() {
    cout << "Function s_calculation called" << endl;
    // ������� ��� ��� ���������� ������� s_calculation ���

}

void task1() {
    cout << "Function task1 called" << endl;
    // ������� ��� ��� ���������� ������� task1 ���

void task2() {
    cout << "Function task2 called" << endl;
    // ������� ��� ��� ���������� ������� task2 ���
}

void task3() {
    cout << "Function task3 called" << endl;
    // ������� ��� ��� ���������� ������� task3 ���
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
                cout << '\a'; // �������� ������ ��� ��������� ��������
                break;
        }
    }

    return 0;
}
