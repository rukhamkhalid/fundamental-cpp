// ADDITION IN 2D ARRAY?

#include<iostream>
using namespace std;
int main()
{
    int Arr1[2][3],Arr2[2][3],sum[2][3];
    cout<<"Enter valvues into Arr1:"<<endl;
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=2;j++)
		{
		 cin>>Arr1[i][j];
		}
	}
   cout<<"Enter valvues into Arr2:"<<endl;
   for(int i=0;i<=1;i++)
	   {
	    for(int j=0;j<=2;j++)
	    {
	        cin>>Arr2[i][j];
	   }
	   }
	   for(int i=0;i<=1;i++)
	   {
	    for(int j=0;j<=2;j++)
	{
	   	sum[i][j]=Arr1[i][j]+Arr2[i][j];
   }}
	cout<<"Sum of matrix:"<<endl;
	 for(int i=0;i<=1;i++)
	   {
	 for(int j=0;j<=2;j++)
	   	{
	   	cout<<sum[i][j]<<"   ";
		   }
		   cout<<endl;
		}	}
	
	
	
	
	
	
	
	
	
	
	
	
