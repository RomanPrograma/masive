#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251);
	int a;
	cout << "������ ����� �� 0 �� 500: " ;
	cin >> a;
	int sum = 0;
	for (int i = a; i <= 500; ++i) {
		sum += i;
	}
	cout << "���� ����� �� " << a << " �� 500: " << sum <<  endl;
	return 0;
}


