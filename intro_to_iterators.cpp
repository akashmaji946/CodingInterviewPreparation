#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

	vector<int> v{10, 20, 5, 15, 30, 45, 50, 45};
	int size = v.size();

	vector<int>::iterator itr = v.begin();

	cout << (*itr) << endl;

	itr++;
	cout << (*itr) << endl;

	itr += 2;
	cout << (*itr) << endl;

	itr = v.end();
	
	itr--;
	cout << (*itr) << endl;

	itr -= 2;
	cout << (*itr) << endl;

    cout << endl;

	vector<int> a = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	vector<int>::iterator i = a.begin();

	cout << *i << endl;

	i = next(i);
	cout << *i << endl;

	i = next(i, 3);
	cout << *i << endl;

	i = next(i, 5);
	cout << *i << endl;

	i = prev(i, 4);
	cout << *i << endl;

	i = prev(i);
	cout << (*i) << endl;

	advance(i, 2);
	cout << *i << endl;

	advance(i, -4);
	cout << *i << endl;


	return 0;



 
}