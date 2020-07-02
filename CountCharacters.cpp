#include<iostream>
#include<climits>

using namespace std;


int main(){

	char character{' '};

	cout << "Enter the deimiter: ";
	char delim{' '};

	delim = cin.get();
	
	cout << "Enter the string: ";
    
	character = cin.get();

	int digits{0}, letters{0}, whitespaces{0}, specials{0};

	while(character != delim){
		if(character>='0' and character <='9')
			digits++;

		else if(character >= 'a' and character <= 'z' or character >= 'A' and character <= 'Z')
			letters++;

		else if(character == ' ' or character == '\n' or character == '\t')
			whitespaces++;
		else
			specials++;
		character = cin.get();
	}
    
    cout << "*********************" <<endl;
	cout << "Digits: " << digits << endl;
	cout << "Letters: " << letters <<endl;
	cout << "whitespaces: " << whitespaces <<endl;
	cout << "Specials: " << specials <<  endl;

	
	
	

	return 0;

}