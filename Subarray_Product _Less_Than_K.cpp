#include <iostream>
using namespace std;

int subarray_product_less_than_k(int * arr, int n, int k) {

	int start = 0;
	int end = 0;
	int product = 1;

	int result = 0;

	while (end < n) {

		product = product * arr[end];

		while (product >= k and start <= end) {
			product = product / arr[start];
			start++;
		}

		if (product < k) {
			int diff = end - start + 1;
			result += diff;
		}

		end++;
	}

	return result;
}

int main() {

	int n;
	cin >> n;

	int * arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int k;
	cin >> k;

	int ans = subarray_product_less_than_k(arr, n, k);

	cout << ans << endl;



	return 0;
}