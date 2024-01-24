#include<iostream>
using namespace std;
main()
{
	int N;
	cout<<"Enter an Option"<<endl;
	cin>>N;
    switch (N)
	{
		case 1:
			{
		    cout<<"Addition:"<<10+8<<endl;
			break;
		}
		case 2:
		{
		 	 cout<<"Subtraction:"<<20-6<<endl;
			 break;
		}
		case 3:
			{
				cout<<"Division:"<<50/5<<endl;
				break;
			}
		default:
		{
			cout<<"Wrong option plz enter write options"<<endl;
		}
}}

