#include<iostream>
#include<climits>

using namespace std;

//Program to print the given pattern
/*

0
10
010
1010
01010
101010
	 
for n==6
*/

int main(){

	int nLevels{0};
	cout << "GIVE N: ";
	cin >> nLevels;

	for(int level = 1; level <= nLevels; level++){
		int start = (level%2) ? 0 : 1;

		for(int column = 1; column <= level; column++){
			cout << start;
			start = 1 - start;
		}

		cout << "\n";
	}

	

	return 0;

}