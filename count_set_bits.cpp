#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;


	int count_set_bits = 0;
	while(n){
		n = n & (n-1);
		count_set_bits++;
	}
	cout << count_set_bits << endl;
	return 0;
}