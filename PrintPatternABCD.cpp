#include<iostream>

using namespace std;

int main(){

	int nRows{0};

	cin >> nRows;

	for(size_t row = nRows; row >= 1; --row){
		char start = 'A';
		for(size_t col = 1; col <= row; ++col){
			cout << start;
			start += 1;
		}

		cout << endl;
	}



	return 0;
}