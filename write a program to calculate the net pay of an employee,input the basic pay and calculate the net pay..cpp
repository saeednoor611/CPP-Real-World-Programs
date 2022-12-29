#include<iostream>
using namespace std;
main()
{
	float basic, ma, ca, net, hr;
	cout<<"Enter basic pay =";
	cin>>basic;
	if(basic>500)
	{
		ma=basic*2/100.0;
		ca=193.0;
		hr=basic * 45.0/100.0;
	}
	else
	{
		ma=basic*5.0/100.0;
		ca=96.0;
		hr=basic*45.0/100.0;
	}
	net=basic+ma+hr;
	cout<<"Net pay ="<<net;
}
