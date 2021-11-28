#include <iostream>

using namespace std;

int main() {

	int N;

	cin >> N;
	int* arr = new int[N];
	arr[0] = 1;
	cout << arr[0] << " ";
	for (int i = 1; i < N; i++) {
		arr[i] = arr[i - 1] + 2;
		cout << arr[i] << " ";
	}
	return 0;
}