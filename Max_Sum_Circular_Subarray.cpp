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

int min_sum_subarray(vector<int> a, int n) {
	int minn = INT_MAX;
	int min_sum_so_far = a[0];

	for (int i = 1; i < n; i++) {
		min_sum_so_far = min(min_sum_so_far + a[i], a[i]);
		minn = min(minn, min_sum_so_far);

	}
	return minn;

}

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
	int n = v.size();

	int total_sum = accumulate(v.begin(), v.begin() + n, 0);

	int max_without_wrap = max_sum_subarray(v, n);
	int max_with_wrap = total_sum - min_sum_subarray(v, n);


	cout << "Total Sum:" << total_sum << endl;
	cout << "Wrap: " << max_with_wrap << endl;
	cout << "Non Wrap: " << max_without_wrap << endl;
	cout << max(max_without_wrap, max_with_wrap) << endl;
	return 0;
}
