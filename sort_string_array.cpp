#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

	vector<string> array= {"akash", "maji", "is", "a", "good", "boy"};
	sort(array.begin(), array.end(), greater<string>());
	for(int i=0; i<6; i++)
		cout << array[i] << " ";




	return 0;
}