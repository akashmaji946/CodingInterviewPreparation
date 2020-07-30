#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

int getIndex(pair<int, int>& p, vector<pair<int, int> >& num_q){
	int i =0;
	for(i = 0; i < num_q.size(); i++){
		int f = num_q[i].first;
		int s = num_q[i].second;
		if(f==p.first && s==p.second) return i;
	}
	return -1;
}
bool exists(pair<int, int>& p, vector<pair<int, int> >& num_q){
	int i =0;
	for(i = 0; i < num_q.size(); i++){
		int f = num_q[i].first;
		int s = num_q[i].second;
		if(f==p.first && s==p.second) return true;
	}
	return false;
}

string getInteger(int num, int den){
	return to_string(num/den);
}

string getDecimal(int num, int den){

	vector<pair<int, int> > num_q;
	int rem;
	int q;
	pair<int, int> p;
	while(true){

		

		rem = num % den;
		if(rem==0){
			string out = "";
			for(auto element: num_q){
				// cout << element.second << endl;
				out += to_string(element.second);
			}
			// cout <<"Part 1: "  << out << endl;
			return out;
		}
		num = rem * 10;
		q = num / den;
		p = make_pair(num, q);

		if(!exists(p, num_q)){
			num_q.push_back(p);
		}

		
		else if(exists(p, num_q)){
			int index = getIndex(p, num_q);
			string out = "";
			for(int i = 0; i< index; i++){
				out += to_string(num_q[i].second);
			}
			out += "(";
			for(int i = index; i< num_q.size(); i++){
				// cout << num_q[i].second << endl;
				out += to_string(num_q[i].second);
			}
			out += ")";
			//cout << "Part 2: " <<out <<  endl;
			return out;


		}
		

	}

}


string representReal(int num, int den){
	string integer = getInteger(num, den);
	string point = ".";
	string decimal = getDecimal(num, den);

	string answer = integer + point + decimal;
	return answer;
}

int main(){
	int num;
	int den;

	cout << "Give NUM and DEN: ";
	cin >> num >> den ;

	cout << "The decimal rep. is " << num << " / " << den << ": ";

	string decimal = representReal(num, den);
	cout << decimal << endl;




}
