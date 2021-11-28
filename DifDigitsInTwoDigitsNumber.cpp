#include <iostream>
#include <string>
using namespace std;
int main() {

	int arr[5], i, j = 0;
	string res[5];

	for (i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	while (j < 5) {

		if (to_string(arr[j])[0] == to_string(arr[j])[1]) {
			res[j] = "NO";
		}
		else {
			res[j] = "YES";
		}
		j += 1;
	}

	cout << res[0] << endl;
	cout << res[1] << endl;
	cout << res[2] << endl;
	cout << res[3] << endl;
	cout << res[4] << endl;

	return 0;
}
