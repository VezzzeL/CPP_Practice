#include <iostream>
#include <string>
using namespace std;
int main() {
	int arr[5], i, j = 0;
	string res[5];
	for (i = 0; i < 5; i++) {
		cin >> arr[i];
		if ((arr[i] % 2) != 0 && arr[i] < 0) {
			res[j] = "YES";
			j++;
		}
		else {
			res[j] = "NO";
			j++;
		}
	}
	cout << res[0] << endl;
	cout << res[1] << endl;
	cout << res[2] << endl;
	cout << res[3] << endl;
	cout << res[4] << endl;
	return 0;
}