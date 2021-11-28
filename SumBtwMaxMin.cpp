#include <iostream>
using namespace std;
int main() {
	int N, L, R, sum = 0, max, min;
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		if (i == 0) {
			max = arr[i];
			min = arr[i];
		}
		if (min >= arr[i]) {
			min = arr[i];

		}
		if (max <= arr[i]) {
			max = arr[i];
		}
	}
	for (int i = 0; i < N; i++) {
		if (arr[i] == min) {
			L = i;
			break;
		}
	}
	for (int i = 0; i < N; i++) {
		if (arr[i] == max) {
			R = i;
		}
	}
	if (L > R) {
		L = L + R;
		R = L - R;
		L = L - R;
	}
	for (int i = 0; i < N; i++) {
		while (i == L && L <= R) {
			sum += arr[i];
			L++;
		}
	}
	cout << sum;
	return 0;
}
