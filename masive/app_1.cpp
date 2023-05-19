#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n, i;
    float num[1000], sum = 0.0, average;

    cout << "Введіть кількість чисел: ";
    cin >> n;

    while (n > 1000 || n <= 0)
    {
        cout << "Error! number should in range of (1 to 1000)." << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }

    for (i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Введіть число: ";
        cin >> num[i];
        sum += num[i];
    }

    average = sum / n;
    cout << "Середнє арифметичне = " << average;
    return 0;
}

