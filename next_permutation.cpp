#include<iostream>
#include<vector>
using namespace std;


bool next_perm(vector<int> &arr, int size){

   // head keeps the head of non-increasing sequence 
	int head = size - 1;
	while(head > 0 && arr[head-1] >= arr[head])
	 head--;

   // head <= 0 implies already the last permutation
	if(head<=0) return false;
    

    //pivot is the element just before the non-increasing sequence
	int pivot_index = head-1;
     

     // just_more_than_pivot_index stores the index of element just greater than pivot
	int just_more_than_pivot_index = size - 1;

	while(arr[just_more_than_pivot_index] <= arr[pivot_index]) 
		just_more_than_pivot_index--;
    
    // pivot is swapped with next element to explore
	swap(arr[pivot_index], arr[just_more_than_pivot_index]);
    

    // sorting the non-increasing sequence to get next permutation
	int i = head;
	int j = size - 1;
	while(i <= j){
		swap(arr[i], arr[j]);
		i++; j--;
	}


   return true;

}


int main(){

	vector<int> arr{0, 1, 2, 3, 4, 5};
	int size = arr.size();
	int count = 0;

    do{

    	for(int j = 0; j < size; j++)
    		cout << arr[j] << " ";
        count ++;
    	cout << endl;
    }
    while(next_perm(arr, size));
    cout <<"Total: "<< count << endl;

   cin >> size;
	return 0;
}