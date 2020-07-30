#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){

	int arr[] = {1, 3, 2, 7, 6, 8};
	int n = 6;
	int key;
	cin >> key;

	auto it = find(arr, arr + 6, key);

	cout << "Address: "<< it << endl;
	cout << "Value: " << (*it) << endl;

	cout << "Index : " << it-arr << endl;
	




	return 0;
}