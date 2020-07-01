#include<iostream>
#include<climits>

using namespace std;

int main(){

	int numberOfNumbers{0};
	cout << "Enter the number of numbers: ";
	cin >> numberOfNumbers;

	int min{0}, max{0}, times{0};
	cin >> max;
	min = max;
	times = numberOfNumbers - 1;

	if(numberOfNumbers%2==0){
		cin >> min;
		if(min > max) swap(min, max);
		times = numberOfNumbers - 2;
	}

	int num2{0}, num1{0};
	for(size_t index = 0; index < times / 2; index++){
		cin >> num1 >> num2;
		if(num1 < num2) swap(num1, num2);
		if(max < num1) max = num1;
		if(min > num2) min = num2;
	}


	cout << "The minimum: " << min << endl;
	cout << "The maximum: " << max << endl;

	return 0;
}