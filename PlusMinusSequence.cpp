#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int64_t M, N, k;
	cin >> M >> N;
	int64_t* arr = new int64_t[N];
	k = M;
	for (int i = 0; (i < k) && (k >= M) && (k <= N); i++) {
		arr[i] = pow(-1, (k - 1)) * ((3 * k) + (-1));
		cout << arr[i] << " ";
		k++;
	}
	return 0;
}
