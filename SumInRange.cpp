#include <iostream>
using namespace std;

int main() {
	int N, k = 0, L, R, sumEven = 0;
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		if (arr[i] % 2 == 0 && k == 0) {
			L = i;
			k++;
		}
		else if (arr[i] % 2 == 0 && k == 1) {
			R = i;
			k++;
		}
	}
	for (int i = 0; i < N; i++) {
		while (i == L && L <= R) {
			sumEven += arr[i];
			L++;
		}
	}
	cout << sumEven;
	return 0;
}