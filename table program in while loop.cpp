#include<iostream>
using namespace std;
int main(){
	int table,counter = 1,result;
	cout<<"Enter number"<<endl;
	cin>>table; // 10
	while(counter<=11){
		result = table * counter;//10 * 3 = 30
		cout<<table<<" * "<<counter<<" = "<<result<<endl;
		counter++; //2 + 1 = 11
	}
}
