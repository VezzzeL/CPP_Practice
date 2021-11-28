#include <iostream>
#include <string>
using namespace std;

int main() {

	string arr[] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
	int i;
	cin >> i;
	if (i >= 1 && i <= 7) {
		cout << arr[i - 1];
	}
	else {
		cout << "Error";
	}
	return 0;
}
