#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double number;
	int sum = 0;
	cin >> number;
	if (number - int(number) == 0) {
		while (int(number) != 0) {
			sum += int(number) % 10;
			number = number / 10;
		}
		cout << abs(sum);
	}
	else {
		cout << sqrt(abs(number));
	}

	return 0;
}