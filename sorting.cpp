#include<iostream>
#include<cstdlib>
using namespace std;
main()
{
	int a[5];
	int n=0;
    for(int i=0;i<5;i++)
	{
    	a[i]=rand() % 30;
	}
	for(int j=0;j<5;j++)
	{
	for(int r=j+1;r<5;r++)
	{
	if(a[j]>a[r])
	{
	 n =a[j];
	 a[j]=a[r];
	 a[r]=n;
    }
    	}
	}
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<"\t";
	}
}
