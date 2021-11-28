#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int K, N;
	vector <string> res;
	cin >> K;
	for (int j = 0; j < K; j++) {
		cin >> N;
		bool check = false;
		int* arr = new int[N];
		for (int i = 0; i < N; i++) {
			cin >> arr[i];
		}
		for (int i = 0; i < (N - 1); i++) {
			if (arr[i] * arr[i + 1] == abs(arr[i] * arr[i + 1])) {
				check = true;
			}
		}
		if (check == true) {
			res.push_back("YES");
		}
		else {
			res.push_back("NO");
		}
		delete[] arr;
	}
	for (int i = 0; i < K; i++) {
		cout << res[i] << endl;
	}
	return 0;
}