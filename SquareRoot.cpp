#include<iostream>
#include<climits>

using namespace std;

int main(){

	int Number{0};
	cout << "Enter number: ";
	cin >> Number;

	double answer{0.0};
	int precision{0};

	double increment{1.0};
	cout << "ENTER precision: ";
	cin >> precision;

	for(size_t times = 0; times <= precision; ++times){

		while(answer * answer <= Number){
			answer += increment;

		}
		answer -= increment;
		increment /= 10;
	}

	cout << answer << endl;

	return 0;
}