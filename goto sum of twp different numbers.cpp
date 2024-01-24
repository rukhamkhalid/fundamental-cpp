#include<iostream>
using namespace std;
main()
{
	int start,sum,end;
	sum=0;
	cout<<"Enter the starting point:";
	cin>>start;
	cout<<"Enter the ending point:";
	cin>>end;
	SUM:
	 sum=sum+start;
	 start++;
	 if(start<=end)
	 goto SUM;
	 cout<<"sum of two numbers:"<<sum;
}
