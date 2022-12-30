#include<iostream>
using namespace std;

void swap(int *x,int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}
void selectionsort(int arr[],int size){
	int i,j,min_idx;
	for(i=0;i<size-1;i++){
		min_idx = i;
		for(j=i+1;j<size;j++){
			if(arr[j] < arr[min_idx])
				min_idx = j;
				
				// 21 < 40 ( minidx = 21
			
			//swap the min value
			if(min_idx!=i)
				swap(&arr[min_idx],&arr[i]);
				
		}
	}
	
}
//Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main(){
	

    int arr[] = {64, 25, 12, 22, 11};
	int size = sizeof(arr)/ sizeof(arr[0]);
	
	selectionsort(arr,size);
	printArray(arr,size);
	return 0;
}
