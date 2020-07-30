#include<iostream>
using namespace std;

int getRem(string s, int mod){

	int  sum = 0;
	for (int i = 0; i < s.length(); ++i)
	{
		int digit = s[i] - '0';
		sum = (sum * 10 + digit) % mod;
	}
	return sum;
}

int GCD(int a, int b){
	if(b == 0) return a;
	else return GCD(b, a%b);
}

int main(){

	string num = "123";
	int mod = 7;

	cout << getRem(num, mod);
	cout << endl;


	string a = "4837378365765734567314867367748363476783467846456801367380673470657346537465780346";
	int b = 45987;

	int rem = getRem(a, b);
	cout << GCD(b, rem) << endl;




	return 0;
}