#include<iostream>
using namespace std;
main()
{
	int n=1;int i=0;
	int man[i];
	int ban[i];
	int ora[i];
	while(n!=-1)
	{
		cout<<"Enter Mangoes:";
		cin>>man[i];
		cout<<"Enter Oranges:";
		cin>>ora[i];
		cout<<"Enter Bnanaas:";
		cin>>ban[i];
		i++;
	}
	cout<<"Do you want to enter more:";
	cin>>n;
	int sm=0;
	int so=0;
	int sb=0;
	for(int j=0;j<=i-1;j++)
	{
		sm=sm+man[i];
		so=so+ora[i];
		sb=sb+ban[i];
	}
}
