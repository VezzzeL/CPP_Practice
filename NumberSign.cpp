#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	if (N > 0) cout << N * N;
	else if (N < 0) cout << abs(N);
	else cout << "0" << endl;
}