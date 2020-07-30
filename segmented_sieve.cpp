#include<iostream>
#include<vector>
#define MAX 1000001
#define ll long long int

using namespace std;

vector<int> sieve(){
	bool isPrime[MAX] = {false, false};
	for(int i = 2; i < MAX; i++){
		isPrime[i] = true;
	}
	for(int i = 2; i*i < MAX; i++){
		if(isPrime[i]){
			for(int j = i * i; j < MAX; j += i)
				isPrime[j] = false;
		}
	}

	vector<int> primes;
	primes.push_back(2);
	for(int i = 3; i < MAX; i += 2){
		if(isPrime[i]){
			primes.push_back(i);
		}
	}
	return primes;
}

void printPrimes(ll l, ll r, vector<int>& primes){
	bool isPrime[r-l+1];
	for(int i=l; i <=r; i++){
		isPrime[i-l] = true;
	}

	for(int i = 0; primes[i]*primes[i] <= r; i++){

		int currPrime = primes[i];
		ll base = (l/currPrime)*currPrime;

		if(base < l){
			base += currPrime;
		}
		for(int j = base; j <= r; j+=currPrime)
			isPrime[j-l] = false;

		if(base == currPrime)
			isPrime[base - l] = true;



	}
	for(int i = 0; i <= (r-l); i++){
		if(isPrime[i] and (i+l)>=2)
			cout << (i + l) << " ";
	}
	cout << endl;
}

int main(){

	ll left, right;
	cin >> left >> right ;
	vector<int> primes = sieve();
	for(int i =0; i< 10; i++){
		cout << primes[i] << " ";
	}
	cout << endl;

	printPrimes(left, right, primes);



}