#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int A;
    cout << "������ ���� ����� A: ";
    cin >> A;
    int sum = 0;
    int value_A = A;
    while (value_A != 0) {
        int digit = value_A % 10;
        sum += digit;
        value_A /= 10;
    }
    int cube_sum = sum * sum * sum;
    if (cube_sum == A * A) {
        cout << "��� ���� ������� �*� ";
    }
    else {
        cout << "��� ���� �� ������� �*� ";
    }
    return 0;
}