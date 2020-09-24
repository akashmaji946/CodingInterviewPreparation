#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int maxTurbulenceSize(int* A, int ASize) {

	int ** arr = (int **) malloc(ASize * sizeof(int*));
	for (int i = 0; i < ASize; i++) {
		arr[i] = (int*)malloc(2 * sizeof(int));
		arr[i][0] = arr[i][1] = 1;
	}

	int ans;
	if (ASize == 0)
		ans = 0;
	else ans = 1;

	int max;
	for (int i = 1; i < ASize; i++) {
		if (A[i - 1] < A[i]) {
			arr[i][0] = arr[i - 1][1] + 1;
		}
		else if (A[i - 1] > A[i]) {
			arr[i][1] = arr[i - 1][0] + 1;
		}
		if (arr[i][0] > arr[i][1])
			max = arr[i][0];
		else
			max = arr[i][1];
		if (max > ans)
			ans = max;

	}
	for (int i = 0; i < ASize; i++) {
		free(arr[i]);
	}
	free(arr);
	return ans;

}

int main() {

	int n;
	cin >> n;
	int A[n];
	for (int i = 0 ; i < n; i++) {
		cin >> A[i];
	}

	cout << maxTurbulenceSize(A, n) << endl;



	return 0;
}