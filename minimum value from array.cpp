#include<iostream>
using namespace std;
int main()
{
    //	find out maximum value form array
     //  arr[5]  = { 1, 2, 5, 4, 3}
     //  max = arr[0] = 2,5,4,3 > 1
     int arr[5] = {3,2,5,4,1};
     int min = arr[0];
     int i;
     for(i=0;i<=4;i++){
     	cout<<arr[i];
     	if(arr[i] < min){
     		min = arr[i];
		 }
	 }
      cout<<endl;
      cout<<min;
	return 0;
}
