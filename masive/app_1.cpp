#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int A;
    int B;
    cout << "������  ����� ����� : ";
    cin >> A;
    cout << "������  ����� ����� : ";
    cin >> B;
    
    ;
    for (int i = 1; i <= A; i++) {
        if (A % i == 0 && B % i == 0) {
            cout << i << " ";
        }
    }
    return 0;
}