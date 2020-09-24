#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int * arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int max_profit = 0;
	int cost_price = arr[0];

	int start{0};
	int end{ -1};

	for (int i = 1; i < n; i++) {

		int selling_price = arr[i];
		int profit = selling_price - cost_price;
		//max_profit = max(max_profit, profit);
		//cost_price = min(cost_price, selling_price);

		if (profit > max_profit) {
			max_profit = profit;
			end = i + 1;
		}
		if (cost_price > selling_price) {
			cost_price = selling_price;
			start = i + 1;
		}
	}

	cout << "MAX Price: " << max_profit << " and between " << start << " and " << end << endl;




	return 0;
}