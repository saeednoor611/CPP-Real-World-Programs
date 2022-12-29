#include<iostream>
using namespace std;
main()
{
	int num1,num2,num3;
	cout<<"enter num1, num2, num3 :";
	cin>>num1>>num2>>num3;
	if((num1>num2)  && (num1>num3))
	{
		if((num2>num1)  && (num2>num3))
		{
			cout<<"num2 is greater :";
		}
		cout<<"num1 is greater :";
		
		}
		else 
		{
			cout<<"num3 is greater";
		}
}
