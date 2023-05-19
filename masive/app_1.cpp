#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int A;
    cout << "¬вед≥ть  число : ";
    cin >> A;
    for (int i = 1; i <= A; i++) {
        if (A % i == 0) {
            cout << i << " ";
        }
    }
    return 0;
}