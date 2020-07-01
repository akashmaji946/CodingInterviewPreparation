#include<iostream>

using namespace std;

int main(){

	double celcius{0}, fahrenheit{0};

	cout << "Enter the range of fahrenheit(0-300)" <<endl;;

	cout << "Lower Limit: ";

	double lower_limit{0};
	cin >> lower_limit;

	cout << "Upper Limit: ";

	double upper_limit{0};
	cin >> upper_limit;

	cout << "Enter increment: ";
	double increment{0};

	cin >> increment;

	cout << "-------------------" << endl ;
	cout << "Fahren." << " " << "Celc." <<endl;
	cout << "-------------------" << endl ;

	while(lower_limit <= upper_limit){
		fahrenheit = lower_limit;

		celcius = (5/9.0)*(fahrenheit-32.0);
		cout << fahrenheit << "     " << celcius << endl;
		lower_limit += increment;
	}

	return 0;
}