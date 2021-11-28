#include <iostream>
#include <string>
#include <cmath>

using namespace std;
bool checkSimpl(int a);

int main() {
	int N, k = 0;
	double res = 0.0;
	cin >> N;
	double* arr = new double[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		if (checkSimpl(arr[i]) == true) {
			res += arr[i];
			k++;
			checkSimpl(0);
		}

	}
	if (res == 0.0) {
		k = 1;
	}
	cout << to_string(res / k);
	return 0;
}

bool checkSimpl(int a) {
	a = abs(a);
	if (a == 2) {
		return true;
	}
	if (a % 2 == 0 || a == 0 || a == 1) {
		return false;
	}
	for (int i = 3; i <= sqrt(a); i += 2) {
		if (a % i == 0) return false;
	}
	return true;
}