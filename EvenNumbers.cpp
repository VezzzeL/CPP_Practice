#include <iostream>
using namespace std;
int main() {
	int number;
	cin >> number;
	if (number % 2 == 0) {
		cout << number * number;
	}
	else {
		cout << number - 1;
	}
	return 0;
}