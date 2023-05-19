#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	int a = 0;
	for (int i = 100; i <= 999; ++i) {
		int num_1 = i / 100;
		int num_2 = (i / 10) % 10;
		int num_3 = i % 10;

		if (num_1 != num_2 || num_2 != num_3 || num_1 != num_3) {
			a++;
		}
	}
	cout << "The number of integers in the range 100 to 999 that have not two identical digits: " << a << endl;
	return 0;
}