#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	int N;
	cin >> N;
	int A[1000];
	for(int i=0; i< N; i++){
		cin >> A[i];
	}
	sort(A, A + (N/2));
	sort(A + (N/2), A + N, greater<int>());
	
	for(int i=0; i< N; i++){
		cout << A[i] << " ";
	}




	return 0;
}
