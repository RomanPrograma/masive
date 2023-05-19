#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a = 1;
	int b = 1000;
	int sum = a + b;
	float avg = sum / 2;
	cout << avg;
	return 0;
}
