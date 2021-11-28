#include "iostream"
using namespace std;
int main(void)
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j == 0) {
                cout << "*";
            }
            else if (j == (N - 1) || i == 0 || i == (N - 1)) {
                cout << " " << "*";
            }
            else if (j == 1) {
                cout << " " << "+ ";
            }
            else if (j == (N - 2)) {
                cout << "+";
            }
            else {
                cout << "+" << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
