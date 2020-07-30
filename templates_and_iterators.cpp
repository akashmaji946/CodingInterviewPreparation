#include<iostream>
#include<vector>
using namespace std;

template<class Iterator, class T>
Iterator search(Iterator begin, Iterator end, T k){

	while(begin != end){
		if(*begin == k) return begin;
		begin++;
	}
	return end;
}

int main(){

	vector<int> v{1, 2, 3, 4, 5};
	int k = 4;
	vector<int>::iterator itr = search(v.begin(), v.end(), k);
	if(itr != v.end())
		cout << "Element Found: ", 
		cout << (*itr) << endl;
	else 
		cout << "Element Not Found";
	return 0;




}