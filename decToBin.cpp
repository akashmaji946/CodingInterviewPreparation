#include<iostream>
using namespace std;


void decToBin(int n){
	if(n==0) return;
	int rem = n % 2;
	decToBin(n/2);
	cout << rem << " ";
}

void decToOct(int n){
	if(n==0) return;
	int rem = n % 8;
	decToBin(n/8);
	cout << rem << " ";
}
void decToHex(int n){
	if(n==0) return;
	int rem = n % 16;
	decToBin(n/16);
	if(rem >= 0 and rem < 10)
	cout << rem << " ";
    else 
    	cout << (char)(rem-10+67) << " ";

}

int main(){
   int dec = 0;
   cin >> dec;

   decToBin(dec);
   cout << endl;
   decToOct(dec);
   cout << endl;
   decToHex(dec);



	return 0;
}