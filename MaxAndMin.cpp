#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a > b) {
        cout << a * a << endl;
        cout << b * b;
    }
    else if (a < b) {
        cout << b * b << endl;
        cout << a * a;
    }
    else {
        cout << "0" << endl;
        cout << "0";
    }
    return 0;
}