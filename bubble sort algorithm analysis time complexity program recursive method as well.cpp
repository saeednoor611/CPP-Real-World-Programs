#include<iostream>
using namespace std;
void bubblesort(int arr[],int size){
	int i,j;
//	loop for outer passes
	for(i=0;i<size-1;i++){
//		loop for inner swapping
		for(j=0;j<size-i-1;j++){
			if(arr[i] > arr[j+1])
		    swap(arr[i],arr[j+1]);
			// 5 > 2   [2,5]
			// 5 > 4   [2,4,5]
			// 5 > 3   [2,4,3,5]
			// 5 > 1   [2,4,3,1,5]
		}
	}
}
void printarr(int arr[],int size){
	for(int i=0;i<size-1;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	// unsorted array
	int arr[5] = {5,2,4,3,1};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	bubblesort(arr,size);
	printarr(arr,size);
	return 0;
}
