#include <iostream>
#include <vector>
#include <climits>
using namespace std;

/*

Time: O(n^3)
Space: O(1)

Approach: Generates all possible subarrays and then finds the right one
*/

int max_sum_subarray(vector<int>& v, int n) {

	int max_sum = INT_MIN;

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			int sum = 0;

			for (int k = i; k <= j; k++) {
				sum += v[k];
			}

			if (sum > max_sum)
				max_sum = sum;
		}
	}
	return max_sum;
}
int main() {

	vector<int> v = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
	int n = v.size();

	cout << max_sum_subarray(v, n) << endl;



	return 0;
}