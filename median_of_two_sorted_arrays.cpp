#include<iostream>
#include<climits>

#define print(x) cout<<x<<endl;
using namespace std;
int findKth(int *A, int m, int a, int* B, int n, int b, int k){
	if(a >= m) 
		return B[b+k-1];
	if(b >= n-1) 
		return A[a+k-1];

	if(k==1) 
		return min(A[a], B[b]);

	int aMid = INT_MAX;
	int bMid = INT_MAX;

	if(a+k/2-1 < m)
	 aMid = A[a+k/2-1];
	if(b+k/2-1 < n)
	 bMid = B[b+k/2-1];

	if(aMid<bMid) 
		return findKth(A, m, a+k/2, B, n, b, k - k/2);
	else 
		return findKth(A, m, a, B, n, b+k/2, k - k/2);

}

int main(){

	int num1[3] ={1,3};
	int num2[2] = {2,4};

	int m = 2;
	int n = 2;
	int t = m + n;
	int l = (t + 1) / 2;
	int r = (t + 2) / 2;

	// cout << findKth(num1, m, 0, num2, n, 0, l);
	// cout << endl;
	// cout << findKth(num1, m, 0, num2, n, 0, r);
	// cout << endl;
    

    print((findKth(num1, m, 0, num2,  n, 0, l) + findKth(num1, m,0, num2, n, 0, r))/2.0);



	return 0;
}