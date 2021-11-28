#include <iostream>
#include <string>
using namespace std;
int main() {
	int number;
	cin >> number;
	if ((number / 100) >= 1 && (number / 100) < 10) {
		cout << to_string(number)[0];
	}
	else {
		cout << to_string(number).back();
	}
	return 0;
}