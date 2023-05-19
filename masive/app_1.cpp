#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;
	cout << "¬вед≥ть число : ";
	cin >> x;
	int y;
	cout << "¬вед≥ть cтеп≥нь числа : ";
	cin >> y;
	int sum;
	sum = pow(x, y);
	cout << "„исло: " << x << " в степен≥: " << y << ": " << sum << endl;
	return 0;
}
