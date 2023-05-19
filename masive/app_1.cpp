#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251);
	int a;
	cout << "¬вед≥ть число в≥д 0 до 500: " ;
	cin >> a;
	int sum = 0;
	for (int i = a; i <= 500; ++i) {
		sum += i;
	}
	cout << "—ума чисел в≥д " << a << " до 500: " << sum <<  endl;
	return 0;
}


