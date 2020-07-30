#include<iostream>
using namespace std;

template<class X, class Y>
struct Pair{

	X x;
	Y y;
	Pair(X a, Y b){
		x = a;
		y = b;
	};
	X getFirst();  // defined later
	Y getSecond() {return y;}
};

template<class X, class Y>
X Pair<X ,Y>::getFirst(){
	return x;
};

int main(){



	Pair<int, char> pair1(10, 'a'), pair2(20, 'b');
	cout << pair1.getFirst() << " " << pair1.getSecond();
	cout << endl;
	cout << pair2.getFirst() << " " << pair2.getSecond();



	return 0;
}