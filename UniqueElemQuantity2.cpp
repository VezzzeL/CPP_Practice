#include <iostream>
int ArrSort(int arr[], int N);
using namespace std;

int main() {
	int N, res = 1;
	int step;
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	ArrSort(arr, N);
	step = arr[0];
	for (int i = 0; i < N; i++) {
		if (step != arr[i]) {
			res++;
		}
		step = arr[i];
	}
	cout << res;
	return 0;
}
int ArrSort(int arr[], int N) {
	for (int i = 0; i < (N); i++) {
		for (int j = 0; j < N; j++) {
			int sort;
			if (arr[j] > arr[i]) {
				sort = arr[i];
				arr[i] = arr[j];
				arr[j] = sort;
			}
		}
	}
	return arr[N];
}