#include<iostream>
using namespace std;


template<typename T>
T findMax(T arr[], int n){
	T max = arr[0];
	for(int i =0; i<n; i++){
		if(max < arr[i])
			max = arr[i];
	}
	return max;
}

int main(){


	int arr_int[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout << findMax<int>(arr_int, 10);

	cout << endl;

	double arr_double[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};
	cout << findMax<double>(arr_double, 10);




	return 0;
}