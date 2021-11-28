#include <iostream>
using namespace std;
int main() {
	int number;
	cin >> number;
	if (number > 0) {
		if ((number % 2) == 0) {
			cout << "YES" << endl;
			cout << number + 2;
		}
		else {
			int num_plus = number;
			for (int i = 0; (num_plus % 2) != 0; i++) {
				num_plus += 1;
			}
			cout << "NO" << endl;
			cout << num_plus;
		}
	}
	else {
		cout << "NO" << endl;
		cout << "2";
	}
	return 0;
}