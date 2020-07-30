#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	int arr[] = {10, 20, 5, 15, 30, 45, 50, 45};
	int size = sizeof(arr) / sizeof(int);

	sort(arr, arr + size);

	for(auto item: arr)
		cout << item << " ";

	cout << endl;

	if(binary_search(arr, arr + size, 30))
		cout << "Item " << 30 << " is present";
	else
		cout << "Item" << 30 << " is not present";

	return 0;
}
