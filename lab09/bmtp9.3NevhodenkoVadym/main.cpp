#include <iostream>
#include <bitset>

using namespace std;

int main() {
    unsigned int n;
    cout << "Enter a number between 0 and 7483650: "; //������ ����� �� 0 �� 7483650
    cin >> n;

    bitset<32> bits(n);
    bool d = bits[15]; // 16-� ��

    if (d == 0) { // ���� 16-� �� = 0
        int count = 0;
        for (int i = 0; i < 32; i++) {
            if (bits[i] == 0) {
                count++;
            }
        }
        cout << "Number of binary zeros: " << count << endl; //ʳ������ �������� ����
    } else { // ���� 16-� �� = 1
        int count = 0;
        for (int i = 0; i < 32; i++) {
            if (bits[i] == 1) {
                count++;
            }
        }
        cout << "Number of binary units: " << count << endl; //ʳ������ �������� �������
    }

    return 0;
}
