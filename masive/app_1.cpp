#include <iostream>
#include <windows.h>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a;
	cout << "¬вед≥ть номер вар≥анту (в≥д 2 до 9): ";
	cin >> a;
	
	for (int i = 2; i <= 9; ++i) {
		int sum = a * i;
		cout << a << "x" << i << "=" << sum<<endl;
	}
	
	return 0;
}
