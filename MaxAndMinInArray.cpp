#include <iostream>
using namespace std;
int main() {

	int a, b, c;
	cin >> a >> b >> c;
	int arr[] = { a,b,c };
	int max = arr[0];
	int min = arr[0];
	for (int i = 0; i < 3; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	for (int i = 0; i < 3; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	cout << max * max << endl;
	cout << min * min;

	return 0;
}