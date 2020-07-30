#include<iostream>


using namespace std;
void print(char *a, int n){
	for(int i = 0; i<n ;i++) cout << a[i] << " ";
		cout << endl;
}

void permute(int *count_map, char* str, int count, char* result, int level, int length){
	if(level == length)
		print(result, length);
	for(int  i = 0; i < count; i++){
		if(count_map[i]==0) continue;

		result[level] = str[i];
		count_map[i]--;
		permute(count_map, str, count, result, level+1, length);
		count_map[i]++;

	}
}

int main(){

	string s = "AABC";

	int* arr = new int[26];

	for(int i = 0; i<26; i++) 
		arr[i] = 0;
	for(int i = 0; i < s.length(); i++){
		arr[(char)s[i] - 'A']++;
	}
	for(int i = 0; i<26; i++) 
		cout << arr[i] << " ";
	cout << endl;

	int count = 0;
	for(int i = 0; i < 26; i++){
		if(arr[i]!=0) count++;
	}
	cout << count << endl;
	int* count_map = new int[count];
	char* str = new char[count];
	int j = 0;
	for(int i = 0; i < 26; i++){
		if(arr[i]!=0){
			count_map[j] = arr[i];
			str[j] = (char)('A'+i);
			j++;
		}
	}
	for(int i = 0; i<count; i++){
		cout << str[i] << " " << count_map[i] << endl;
	}
	int length = s.length();
	char* result = new char[length];
	int level = 0;
	cout << "permutations:"<<endl;
	permute(count_map, str, count, result, level, length);

	delete[] arr;
	delete [] count_map;
	delete[] str;



	return 0;
}