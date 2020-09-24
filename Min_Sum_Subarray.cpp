#include <iostream>
#include <climits>
using namespace std;
/*

Time: O(n)
Space: O(1)

Approach:  KADANE ALGO
*/
int min_sum_subarray(int a[], int n) {
	int minn = INT_MAX;
	int min_sum_so_far = a[0];

	for (int i = 1; i < n; i++) {
		min_sum_so_far = min(min_sum_so_far + a[i], a[i]);
		minn = min(minn, min_sum_so_far);

	}
	return minn;

}
int main(void) {
	int n = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << min_sum_subarray(a, n);



	return 0;
}
/*
9
2 1 -5 4 -3 1 -3 4 -1
-6
*/