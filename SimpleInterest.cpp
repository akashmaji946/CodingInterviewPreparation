#include <iostream>  // include the library files
using namespace std;
int main(){   // start

    double P{0}, R{0}, T{0}; // declare and initialize to zero
    
    cout << "Enter Principal: "; //output
    cin >> P;

    cout << "Enter Rate: ";
    cin >> R;

    cout << "Enter Time: ";
    cin >> T;

    double SI = (P * R * T) / 100;  // formula

    cout << "Simple Interest: " << SI << endl;

    return 0;  //exit
}