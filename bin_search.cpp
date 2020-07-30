#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

	int arr[] = {22, 3, 35, 40, 40, 40, 43, 54, 89, 90};
	int size = sizeof(arr)/sizeof(int);
	int key{};
	cin >> key;


	if(binary_search(arr, arr+size, key)){
		cout << "Element " << key << " is found at ";
		int idx = lower_bound(arr, arr + size, key) - arr;
		cout << idx << endl;
		auto lb = lower_bound(arr, arr + size, key);
		auto up = upper_bound(arr, arr + size, key);
		cout << "Frequency count of " << key << " is: " << (up - lb) << endl;
	}
	else{
		cout << "Element " << key <<  " is not found" << endl;
		cout << "Frequency count of " << key << " is: " << 0 << endl;
	}




	return 0;
}