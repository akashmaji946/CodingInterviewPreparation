#include<iostream>
#include<vector>
using namespace std;

template<class Iterator, class T, class C>
Iterator search(Iterator begin, Iterator end, T k, C cmp){

	while(begin != end){
		if(cmp(*begin, k)) return begin;
		begin++;
	}
	return end;
}
class Book{
private:
	string name{};
	int price{};

public:
	Book(){

	}
	Book(string name, int price){
		this->name = name;
		this->price = price;
	}

	void details(){
		cout << this-> name << " " << this -> price << endl;
	}
	string getName(){
		return this->name;
	}
	int getPrice(){
		return this->price;
	}


};

class BookCompare{

public:
	BookCompare(){

	}

	bool operator()(Book b1, Book b2){
		return b1.getName() == b2.getName();
	}

};

int main(){

	vector<Book> v;
	Book b1("C++", 120);
	Book b2("Java", 130);
	Book b3("Python", 140);

	Book b("C++", 150);
	v.push_back(b1);
	v.push_back(b2);
	v.push_back(b3);

	BookCompare cmp;
	
	vector<Book>::iterator itr = search(v.begin(), v.end(), b, cmp);
	if(itr != v.end()){
		cout << "Element Found: ";
	    Book found(*itr);
	    b.details();
	    cout << " matches with ";
	    found.details();
		cout << endl;
	}
	else 
		cout << "Element Not Found";
	return 0;
}