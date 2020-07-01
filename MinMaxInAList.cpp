#include<iostream>
#include<climits>

using namespace std;

int main(){

	int numberOfNumbers{0};
	cout << "Enter the number of numbers: ";
	cin >> numberOfNumbers;

	int min_so_far = INT_MAX;
	int max_so_far = INT_MIN;
	int current_number{0};

	for(size_t idx = 0; idx < numberOfNumbers; ++idx){
		cin >> current_number;
		if(current_number < min_so_far) min_so_far = current_number;
		else if(current_number > max_so_far) max_so_far = current_number;
	}

	cout << "The minimum: " << min_so_far << endl;
	cout << "The maximum: " << max_so_far << endl;

	return 0;
}