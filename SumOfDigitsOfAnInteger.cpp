
#include<iostream>
using namespace std;

int main(){
  cout << "Enter a number ( > 0 ) : ";
  int Number{0};

  cin >> Number;

  int OriginalNumber{Number};

  int last_digit{0};
  int current_sum{0};

  while(Number){
    last_digit = Number % 10;
    current_sum += last_digit;
    Number = Number / 10;

  }

  cout << "The sum of digits of " << OriginalNumber << " is: " << current_sum << endl;
  return 0;
}