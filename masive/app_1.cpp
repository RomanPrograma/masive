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

    cout << "��� '������ �����'!" << endl;
    cout << "� ������� ����� �� 1 �� 500. ��������� ������� ����." << endl;
    cout << "���� �� ����������� � ��� , ������ 0." << endl;

    startTime = clock();

    while (!guessed) {
        cout << "������ ���� �������: ";
        cin >> guess;

        if (guess == 0) {
            cout << "�� ������ � ���." << endl;
            break;
        }

        attempts++;

        if (guess < secretNumber) {
            cout << "�������� ����� �����." << endl;
        }
        else if (guess > secretNumber) {
            cout << "�������� ����� �����." << endl;
        }
        else {
            guessed = true;
        }
    }

    endTime = clock();

    if (guessed) {
        cout << "³���! �� ������� ����� " << secretNumber << "!" << endl;
        cout << "ʳ������ �����: " << attempts << endl;
        cout << "���, ���������� �� ���: " << (endTime - startTime) / (double)CLOCKS_PER_SEC << " ������." << endl;
    }
    else {
        cout << "��� ���������." << endl;
    }

    return 0;
}