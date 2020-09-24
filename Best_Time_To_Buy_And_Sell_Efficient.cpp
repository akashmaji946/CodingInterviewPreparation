#include <iostream>
#include <climits>
using namespace std;

int main() {
	int n;
	cin >> n;
	int * arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int max_profit = 0;
	int min_price = INT_MAX;

	for (int i = 0; i < n; i++) {

		if (arr[i] < min_price) {
			min_price = arr[i];
		}
		else {
			max_profit = max(max_profit, arr[i] - min_price);
		}


	}

	cout << max_profit << endl;




	return 0;
}