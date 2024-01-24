#include<iostream>
#include<cmath>
using namespace std;
main()
{
	float radius;
	float area;
	int choice;
	float circum;
	cout<<"Enter radius:"<<endl;
	cin>>radius;
	cout<<"Enter choice as 1 area and 2 as for circum:"<<endl;
	cin>>choice;
	if(choice==1)
	{
		area=3.14*radius*radius;
		cout<<"Area:"<<area<<endl;
	}
	else if(choice==2)
	{
		circum=2*3.14*radius;
		cout<<"CIRCUMFERENCE:"<<circum<<endl;
	}}
	
