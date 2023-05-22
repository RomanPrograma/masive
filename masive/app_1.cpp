#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int secretNumber;
    int guess;
    int attempts = 0;
    bool guessed = false;
    clock_t startTime, endTime;

    srand(time(0));
    secretNumber = rand() % 500 + 1;

    cout << "Гра 'Вгадай число'!" << endl;
    cout << "Я загадав число від 1 до 500. Спробуйте вгадати його." << endl;
    cout << "Якщо ви хочетевийти з гри , введіть 0." << endl;

    startTime = clock();

    while (!guessed) {
        cout << "Введіть свою догадку: ";
        cin >> guess;

        if (guess == 0) {
            cout << "Ви вийшли з гри." << endl;
            break;
        }

        attempts++;

        if (guess < secretNumber) {
            cout << "Загадане число більше." << endl;
        }
        else if (guess > secretNumber) {
            cout << "Загадане число менше." << endl;
        }
        else {
            guessed = true;
        }
    }

    endTime = clock();

    if (guessed) {
        cout << "Вітаю! Ви вгадали число " << secretNumber << "!" << endl;
        cout << "Кількість спроб: " << attempts << endl;
        cout << "Час, витрачений на гру: " << (endTime - startTime) / (double)CLOCKS_PER_SEC << " секунд." << endl;
    }
    else {
        cout << "Гра завершена." << endl;
    }

    return 0;
}