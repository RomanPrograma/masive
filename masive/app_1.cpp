#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	cout << "enter first number :";
	int n_1, n_2;
	cin >> n_1;
	cout << "enter second number: ";
	cin >> n_2;
	int min_v = min(n_1, n_2);
	int max_v = max(n_1, n_2);
	int sum;
	cout << "all" << endl;
	for (int count = min_v; count <= max_v; ++count) {
		cout << count << " ";
	}
	cout << endl;
	cout << "sum" << endl;
	sum = 0;
	for (int count = min_v; count <= max_v; count++) {
		sum += count;
	}
	cout << sum << "";
	return 0;
}