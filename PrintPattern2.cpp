#include<iostream>
#include<climits>

using namespace std;

//Program to print the given pattern
/* 
	     1
	    232
	   34543
	  4567654
	 567898765

	 for n==5
	*/

int main(){

	int nLevels{0};
	cout << "GIVE N: ";
	cin >> nLevels;

	for(int level = 1; level <= nLevels; level++){

		//Print Spaces (nLevels - level) times in level

		for(int space = 1; space <= (nLevels - level); space++){
			cout << "  ";
		}

		//Print numbers from level number level number of times
        int value{level};
		for(int count = 1; count <= level; count++){
			cout << value++ << " ";
		}

		// Print decreaing number from (value-2)  to (level)
		value -= 2;
		for(int count = 1; count < level; count++){
			cout << value-- << " ";
		}

		//print a newline 

		cout << endl;



	}

	return 0;

}