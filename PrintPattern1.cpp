/*

1
1 1
1 1 1
1 0 0 1
1 1 1 1 1
1 0 0 0 0 1
1 1 1 1 1 1 1

*/

#include<iostream>
using namespace std;

int main(){

  int NumberOfRows{0};
  cout << "Enter number of rows:";
  cin >> NumberOfRows;

  int current_row{1};

  while(current_row <= NumberOfRows){
    int current_column{1};

    if(current_row % 2){

      while(current_column <= current_row){
        cout << "1 ";
        current_column ++;
      }

    }

    else{

      cout << "1 ";

      while(current_column <= current_row - 2){
        cout << "0 ";
        current_column ++;
      }

      cout << "1 ";

    }

    cout << endl;
    current_row ++ ;
  }

  return 0;

}
