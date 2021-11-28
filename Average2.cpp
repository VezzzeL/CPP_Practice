#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	int N, k = 0;
	double res = 0.0;
	bool checkSimpl = false;
	cin >> N;
	double* arr = new double[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		for (int j = 2; j < pow(arr[i], 2); j++) {
			if (j != abs(arr[i]) && abs(int(arr[i])) % j == 0) {
				checkSimpl = false;
				break;
			}
			else {
				checkSimpl = true;
			}
		}
		if (checkSimpl == true) {
			res += arr[i];
			k++;
			checkSimpl = false;
		}
	}
	if (res == 0.0) {
		k = 1;
	}
	cout << to_string(res / k);
	return 0;
}