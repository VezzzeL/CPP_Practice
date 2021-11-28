#include <iostream>

using namespace std;

int main() {
	int N, res = 1;
	int step;
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	step = arr[0];
	for (int i = 0; i < (N); i++) {
		if (step != arr[i]) {
			res++;
		}
		step = arr[i];
	}
	cout << res;
	return 0;
}