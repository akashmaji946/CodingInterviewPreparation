#include<iostream>

using namespace std;

int main(){

	int NumberOfNumbers{0};

	cout << "Enter the number of numbers: ";

	cin >> NumberOfNumbers;

	int currentValue{1};

	int runningSum{0};

	while(currentValue <= NumberOfNumbers){
		runningSum += currentValue;
		currentValue += 1;
	}

	cout << "The sum of numbers upto " << NumberOfNumbers << " is: " << runningSum;

	return 0;
}