#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	cout << "The perimeter of the rectangle with sides " << a << " and " << b;
	cout << " is " << 2 * (a + b) << "." << endl;
	cout << "The area of the rectangle with sides " << a << " and " << b;
	cout << " is " << a * b << "." << endl;
}