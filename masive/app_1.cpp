#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;
	cout << "������ ����� : ";
	cin >> x;
	int y;
	cout << "������ c����� ����� : ";
	cin >> y;
	int sum;
	sum = pow(x, y);
	cout << "�����: " << x << " � ������: " << y << ": " << sum << endl;
	return 0;
}
