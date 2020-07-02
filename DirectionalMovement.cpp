#include<iostream>

using namespace std;

int main(){

	
	char character{' '};

	int x_cord{0}, y_cord{0};

	cout << "Initial Position: " << x_cord << " " << y_cord << endl;

	cout << "Give Direction: ";    // a string containing E W N S, like NNNEEWS, EEWWSS etc. 
	character = cin.get();

	while(character != '\n'){character = cin.get();

		if(character == 'N')
			y_cord++;
		else if(character == 'S')
			y_cord--;
		else if(character == 'E')
			x_cord++;
		else if(character == 'W')
			x_cord--;
		else
			break;

		character = cin.get();
	}
	if(character != '\n') cout << "Invalid Input";
	else cout << "Final Position: " << x_cord << " " << y_cord << endl;

	return 0;
}