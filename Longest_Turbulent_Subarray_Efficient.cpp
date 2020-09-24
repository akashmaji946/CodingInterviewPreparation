#include <iostream>

#include <bits/stdc++.h>
using namespace std;

int maxTurbulenceSize(vector<int>& A) {

	int curr, maxx;
	curr = maxx = 0;

	for (int k = 0; k < A.size(); k++) {

		if ( k >= 2 && (
		            (  (A[k - 2] > A[k - 1]) and (A[k - 1] < A[k])  ) ||
		            (  (A[k - 2] < A[k - 1]) and (A[k - 1] > A[k])  ) )
		   ) {
			curr++;
		}
		else if (k >= 1 && (A[k] != A[k - 1]))
			curr = 2;
		else
			curr = 1;

		maxx = max(maxx, curr);
	}
	return maxx;
}

int main() {

	int n;
	cin >> n;

	vector<int> A;
	int temp;

	for (int i = 0 ; i < n; i++) {
		cin >> temp;
		A.push_back(temp);
	}

	cout << maxTurbulenceSize(A) << endl;



	return 0;
}