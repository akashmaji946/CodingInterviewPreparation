#include <iostream>
#include <vector>
#include <climits>
#include <numeric>
using namespace std;

/*

Time: O(n)
Space: O(1)

Approach:  KADANE ALGO
*/


int max_sum_subarray(vector<int>& v, int n) {

	int max_sum = INT_MIN;
	int max_end_here = 0;

	for (int i = 0; i < n; i++) {
		max_end_here = max(max_end_here + v[i], v[i]);
		max_sum = max(max_sum, max_end_here);
	}
	return max_sum;
}
int main() {

	vector<int> v = {2, 1, -5, 4, -3, 1, -3, 4, -1};
	// Case 2:  vector<int> v = { -2, -3, -1};
	int n = v.size();

	int total_sum = 0; // accumulate(v.begin(), v.begin() + n, 0);

	int max_without_wrap = max_sum_subarray(v, n);

	for (int i = 0; i < n; i++) {
		total_sum += v[i];
		v[i] = -v[i];
	}


	int max_with_wrap = total_sum + max_sum_subarray(v, n);


	cout << "Total Sum:" << total_sum << endl;
	cout << "Wrap: " << max_with_wrap << endl;
	cout << "Non Wrap: " << max_without_wrap << endl;

	// we are doing this because if all elements are negative then least negative number would be the answer
	// case 2
	if (max_with_wrap == 0) {
		max_with_wrap = max_without_wrap;
	}

	cout << max(max_without_wrap, max_with_wrap) << endl;

	return 0;
}