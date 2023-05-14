#include <iostream>
using namespace std;

int main() {
	cout << "enter min number :";
	int n_1,n_2;
	cin >> n_1;
	cout << "enter max number: ";
	cin >> n_2;
	int max_v = max(n_1, n_2);
	int min_v = min(n_1, n_2);
	cout << "all" << endl;
	for (int count = min_v; count <= max_v; ++count) {
		cout << count << " " ;
	}
	cout << endl ;
	cout << "even numbers: " << endl;
	for (int count = min_v; count <= max_v; ++count) {
		if (count % 2 == 0) {
			cout << count << " ";
		}
	}
	cout << endl;
	cout << "odd numbers: " << endl;
	for (int count = min_v; count <= max_v; ++count) {
		if (count % 2 == !0) {
			cout << count << " " ;
		}
	}
	cout << endl;
	cout << "numbers are multiples of 7: " << endl;
	for (int count = min_v; count <= max_v; ++count) {
		if (count % 7 == !0) {
			cout << count << " ";
		}
	}
	return 0;
}