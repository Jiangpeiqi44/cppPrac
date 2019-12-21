#include "pch.h"
#include <iostream>
using namespace std;
double matric[10][10] = { 0 };
// 注意这里的换值不是换指针！
void swaps(double* i, double* m) {
	double temp = *i;
	*i = *m;
	*m = temp;
}
int main() {
	int n;
	double answer = 1;
	cin >> n;
	for (int i = 0; i != n; i++) {
		for (int j = 0; j != n; j++) {
			cin >> matric[i][j];
		}
	}
	for (int i = 0; i != n; i++) {
		if (matric[i][i] == 0) {
			if (i == n - 1) {
				break;
			}
			for (int j = i + i; j != n; j++) {
				if (matric[j][i] != 0) {
					for (int m = i; m != n; m++) {
						swaps(&matric[i][m], &matric[j][m]);
					}
					answer *= (-1);
					break;
				}
			}
		}
		for (int j = i + 1; j != n; j++) {
			if (matric[j][i] != 0) {
				double times = matric[j][i] / matric[i][i];
				for (int m = i; m != n; m++) {
					matric[j][m] -= times * matric[i][m];
				}
			}
			else {
				continue;
			}
		}
	}
	for (int i = 0; i != n; i++) {
		answer *= matric[i][i];
	}
	if (answer - static_cast<int>(answer) >= 0.5) {
		answer++;
	}
	else if (answer - static_cast<int>(answer) <= -0.5) {
		answer--;
	}
	cout << static_cast<int>(answer) << endl;
	
		return 0;
}
