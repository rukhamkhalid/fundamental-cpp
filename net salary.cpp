#include<iostream>
using namespace std;
main()
{
	int salary;
	float net;
	cout<<"Enter the Salary:"<<endl;
	cin>>salary;
	if(salary>=20000)
	{
		net=salary-(salary*7/100);
	}
	else if(salary>=10000)
	{
		net=salary-1000;
	}
	else
	{
		net=salary;
	}
	cout<<"Net salary:"<<net<<endl;
}
