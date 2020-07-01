#include<iostream>
using namespace std;

int main(){

	int Times{0};
	cout << "Enter number of numbers-:- ";
	cin >> Times;

	int Number{0};
	int count{1};


	while(Times--){
        cout << "Enter number " << count << ": ";
		cin >> Number;
		cout << Number * Number << endl;
		count ++;

	}

	return 0;

}