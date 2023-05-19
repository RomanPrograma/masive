#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int A;
    int B;
    cout << "¬вед≥ть  перше число : ";
    cin >> A;
    cout << "¬вед≥ть  друге число : ";
    cin >> B;
    
    ;
    for (int i = 1; i <= A; i++) {
        if (A % i == 0 && B % i == 0) {
            cout << i << " ";
        }
    }
    return 0;
}