#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int A;
    cout << "������ ���� ����� A: ";
    cin >> A;

    cout << "ֳ� ����� B, ��� ���� " << A << " ������� ��� ������� �� B*B � �� ������� ��� ������� �� B*B*B:" << endl;

    for (int B = 1; B <= A; ++B) {
        if (A % (B * B) == 0 && A % (B * B * B) != 0) {
            cout << B << endl;
        }
    }

    return 0;
}