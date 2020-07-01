#include<iostream>
using namespace std;

int main(){

	int Times{0};
	cout << "Enter number of binary numbers: ";
	cin >> Times;

	int Number{0};
	int count{1};


	while(Times--){

		int weight{1};
        int last_bit{0};
        int decimal{0};
        int binary_number{0};

       cout << "Enter binary: ";
       cin >> binary_number;

       int original_binary_number{binary_number};


       while(binary_number){
       	
       	 last_bit = binary_number % 10;
       	 decimal += last_bit * weight;
       	 weight *= 2;
       	 binary_number /= 10;

       }

       cout << "The decimal value of " << original_binary_number << " is: " << decimal << endl;

    }
	
	return 0;

}