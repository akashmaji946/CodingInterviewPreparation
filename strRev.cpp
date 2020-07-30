#include<iostream>
#include<cstring>
using namespace std;

int main(){

	char s[] = "Hello Akash";
	int len = strlen(s);

	cout << s << endl;

	for(int i = 0; i < len/2; i++){
		swap(s[i], s[len-i-1]);
	}
	cout << s << endl;


	char* str = new char[100];
	cout << "__________\n";
	gets(str);
	cout << "You Entered: " << str << endl;
	int count[256] = {0};
	for(int i = 0; i < strlen(str); i++){
		count[str[i]]++;
	}
	cout << "Count\n";
	for(int j = 0; j < 256; j++){
		if(count[j] > 0) 
			cout << (char)j  << " " << count[j] << endl;
	}



	return 0;
}