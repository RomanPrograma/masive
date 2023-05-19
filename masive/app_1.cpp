#include <iostream>
#include <windows.h>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a;
	cout << "Введіть число від 0 до 20: ";
	cin >> a;
	int prod = 1;
	for (int i = a; i <= 20; ++i) {
		prod *= i;
	}
	cout << "Добуток чисел від " << a << " до 20: " << prod << endl;
	return 0;
}
