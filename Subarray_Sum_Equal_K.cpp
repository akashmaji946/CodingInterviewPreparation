#include <iostream>
using namespace std;

void subarray_sum_equal_k(int * arr, int n, int k) {

}
int main() {

	int n;
	cin >> n;

	int * arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int sum;
	cin >> sum;


	int start = 0;
	int end = 1;
	int current_sum = arr[0];

	for (int end = 1; end <= n; end++) {

		while (current_sum > sum and start < end - 1) {
			current_sum -= arr[start++];
		}
		if (current_sum == sum) {
			cout << "Found: " << start << " and " << end - 1 << endl;
			break;
			//end++;
		}
		if (current_sum < sum and end < n) {
			current_sum += arr[end++];
		}

	}




	return 0;
}