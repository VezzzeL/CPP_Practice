#include <iostream>

using namespace std;

int main() {

	int N, k = 1, val = 1;
	cin >> N;
	cout << val << " ";
	while (k < N) {
		val += 3;
		cout << val << " ";
		k++;
	}
	return 0;
}