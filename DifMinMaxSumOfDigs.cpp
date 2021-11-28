#include <iostream>
#include <cmath>

int sumN(int num);

using namespace std;

int main() {
	int N, min, max, minS, maxS, sumNum;
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];

		sumNum = sumN(arr[i]);

		if (i == 0) {
			max = arr[i];
			min = arr[i];
			maxS = sumNum;
			minS = sumNum;
		}
		if (sumNum >= maxS) {
			if (sumNum > maxS) {
				max = arr[i];
				maxS = sumNum;
			}
			else if (sumNum == maxS) {
				if (max < arr[i]) {
					max = arr[i];
				}
			}
		}
		if (sumNum <= minS && sumNum != 0) {

			if (sumNum < minS) {
				minS = sumNum;
				min = arr[i];
			}
			else if (sumNum == minS) {
				if (min > arr[i]) {
					min = arr[i];
				}
			}
		}
		else if (sumNum == 0) {
			minS = sumNum;
			min = 0;
		}
	}
	cout << min << endl << max;
	return 0;
}

int sumN(int num) {
	int sumNum = 0;
	if (num != 0) {
		while (num != 0) {
			sumNum += num % 10;
			num /= 10;
		}
	}
	else {
		sumNum = 0;
	}
	return abs(sumNum);
}