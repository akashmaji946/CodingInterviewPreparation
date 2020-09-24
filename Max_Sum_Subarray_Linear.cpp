#include <iostream>
#include <vector>
#include <climits>
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

	vector<int> v = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
	int n = v.size();

	cout << max_sum_subarray(v, n) << endl;
	return 0;
}
