#include <iostream>
#include <vector>
#include <climits>
#include <numeric>
using namespace std;

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


	if (k < 0) return INT_MIN;

	int ans = 0;
	if (k == 1) {
		ans = kadane(v);
		cout << "== 1" << endl;
		return ans;
	}
	for (int i = 0; i < n; i++) {
		v.push_back(v[i]);
	}
	if (k == 2) {
		ans = kadane(v);
		cout << "== 2" << endl;
		return ans;
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += v[i];
	}

	if (sum > 0) {
		ans = kadane(v) + (k - 2) * sum;
		cout << ">=3 +" << endl;
		return ans;
	}
	else {
		ans = kadane(v);
		cout << ">=3 -" << endl;
		return ans;
	}






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