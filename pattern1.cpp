#include<iostream>

using namespace std;

void print(int k, int n){
	for(int i = 1; i <= n; i++)
		cout << k << " ";
}


int main(){
	int N{};
	cin >> N;


	for(int i = 1; i <= N; i++){
		if(i % 2 == 0){
			print(i+1, 1);
			print(i, 3);
			cout << endl;
		}
		else{
			print(i,3);
			print(i+1, 1);
			cout << endl;
		}
	}
	cout << endl;



	return 0;
}