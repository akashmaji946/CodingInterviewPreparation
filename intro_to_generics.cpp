#include <iostream>

using namespace std;

template<class T>
int search(T a[], int n, T key){
	for(int i = 0; i < n; i++){
		if(a[i] == key)
			return i;
	}
	return n;
}

int main(){

	int a[] = {1, 4, 3, 7, 8, 9, 2};
	int n = sizeof(a)/sizeof(a[0]);
	int key = 8;

	cout << search(a, n, key) << endl;

	double b[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	int size = sizeof(b)/sizeof(b[0]);
	double k = 4.4;

	cout << search(b, size, k) << endl;

	char c[] = {'a', 'b', 'd', 'X'};
	int l = 4;
	char v = 'A';

	cout << search(c, l, v) << endl;




	return 0;
}