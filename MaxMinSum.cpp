#include <iostream>

using namespace std;

int main() {
	int N, sum = 0, k, z;
	cin >> N;
	int* arr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	int max = arr[0] - 1;
	int min = arr[0] + 1;

	for (int i = 0; i < N; i++) {
		if (arr[i] >= max) {
			max = arr[i];
			k = i + 1;
		}
		if (arr[i] < min) {
			z = i + 1;
			min = arr[i];

		}
	}

	cout << sum << endl;
	cout << max << " " << k << endl;
	cout << min << " " << z;

	return 0;
}