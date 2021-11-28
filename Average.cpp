#include <iostream>
#include <string>

using namespace std;

int main() {
	int N, k = 0;
	double res = 0.0;
	cin >> N;
	double* arr = new double[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		if ((int(arr[i]) % 2) != 0 && ((i + 1) % 2) == 0) {
			res += arr[i];
			k++;
		}
	}
	if (res == 0.0) {
		k = 1;
	}
	cout << to_string(res / k);
	return 0;
}
