#include <iostream>
#include <bitset>

using namespace std;

int main() {
    unsigned int n;
    cout << "Enter a number between 0 and 7483650: "; //Введіть число від 0 до 7483650
    cin >> n;

    bitset<32> bits(n);
    bool d = bits[15]; // 16-й біт

    if (d == 0) { // якщо 16-й біт = 0
        int count = 0;
        for (int i = 0; i < 32; i++) {
            if (bits[i] == 0) {
                count++;
            }
        }
        cout << "Number of binary zeros: " << count << endl; //Кількість двійкових нулів
    } else { // якщо 16-й біт = 1
        int count = 0;
        for (int i = 0; i < 32; i++) {
            if (bits[i] == 1) {
                count++;
            }
        }
        cout << "Number of binary units: " << count << endl; //Кількість двійкових одиниць
    }

    return 0;
}
