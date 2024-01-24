#include<iostream>
using namespace std;
main()
{
	int n,sum,c;
	c=1;
	sum=0;
	cout<<"Enter number for sum:"<<endl;
	cin>>n;
	Sum:
    sum=sum+c;
    c++;
    if(c<=n)
	 goto Sum;
	 cout<<"Sum of the series is:"<<sum<<endl;
}
