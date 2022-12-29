#include<iostream>
using namespace std;
int main(){
	int arr[3][3]={{20,30,40},{21,31,22},{11,23,50}};
	int i,j;
	int max = arr[0][0];
	for(i=0;i<3;i++)
	for( j=0;j<3;j++)
	if(arr[i] == arr[j])
	break;
	if(i==j){
	cout<<arr[i];
	
	return 0;
}}
