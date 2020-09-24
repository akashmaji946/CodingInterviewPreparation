#include <iostream>
#include <vector>
#include <climits>
#include <numeric>
using namespace std;

/*

Time: O(n*k)
Space: O(n*k)

Approach:  KADANE ALGO
*/
int kadane(vector<int>& v) {

	int max_sum = INT_MIN;
	int max_end_here = 0;

	int n = v.size();

	for (int i = 0; i < n; i++) {
		max_end_here = max(max_end_here + v[i], v[i]);
		max_sum = max(max_sum, max_end_here);
	}

	return max_sum;
}

int find_max_sum_k_concatenation(vector<int> v, int k, int n) {

	vector<int> a;

	for (int times = 0; times < k; times++) {
		// insertInto(a, v, n);
		for (int i = 0; i < n; i++)
			a.push_back(v[i]);
	}

	return kadane(a);
}

int main() {

	int n;
	cin >> n;

	vector<int> v;

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	int k;
	cin >> k;

	int ans = find_max_sum_k_concatenation(v, k, n);
	cout << ans << endl;

	return 0;
}