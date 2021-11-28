#include <iostream>

using namespace std;

int main() {
	int N, k = 0;
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i < (N - 1); i++) {
		if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
			k += 1;
		}
	}
	cout << k;
	return 0;
}