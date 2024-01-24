#include<iostream>
using namespace std;
main()
{
	float Salary;
	int Grade;
	int bonus;
	cout<<"Enter the Salary"<<endl;
	cout<<"Enter the Grade"<<endl;
	cin>>Salary;
	cin>>Grade;
	if(Grade>15)
	{
	 bonus=Salary*50/100;
	}
	else
	{
	 bonus=Salary*25/100;
	}
	 Salary=Salary+bonus;
	 cout<<"Display Salary="<<Salary<<endl;
	}

