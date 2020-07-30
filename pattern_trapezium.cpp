#include<iostream>
using namespace std;

int main(){

	int N{0};
	cin >> N;

	int nCtr = 1;
	int space = 0;
	int c{0}, ctr{0}, cp{0};


	for(int row = N; row >= 1; row--){
		//print spaces
		for(int s = 0; s < space; s++)
			cout << "  ";

		//print increasing

		for(int i = 1; i <= row; i++){
			cout << nCtr++ << "*";
		}

		if(row==N) {
			ctr = nCtr - 1;
			c = ctr * ctr + 1;
		}
		else{
			c = c - row;
		}

		cp = c;

		for(int i = 1; i < row; i++){
			cout << cp++ << "*";
		}
		cout << cp;

		space++;
		cout << endl;
	}



	return 0;
}