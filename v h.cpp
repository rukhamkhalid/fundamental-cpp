#include<iostream>
using namespace std;
main()
{
	int a[5];
	int new;
    for(int i=0;i<5;i++)
	{
    	cin>>a[i];
	}
	for(int j=0;j<5;j++)
	{
	for(int r=j+1;r<5;r++)
	{
	if(a[j]>a[r])
	{
	 new=a[j];
	 a[j]=a[r];
	 a[r]=new;
    }
    	}
	}
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<endl;
	}
}
