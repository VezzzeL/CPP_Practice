#include <iostream>
using namespace std;

int main() {
	int N, sumNum = 0;
	cin >> N;
	while (N != 0) {
		sumNum += abs(N % 10);
		N = N / 10;
	}
	cout << sumNum;
	return 0;
}