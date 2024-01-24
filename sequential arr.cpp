//Sequential searching

#include<iostream>
using namespace std;
int main()
{
	int Arr[10]={10,20,5,8,13,45,49,56,9,56};
	int num,loc=-1;
	cout<<"Enter a number for search:";
	cin>>num;
	for(int i=0;i<=9;i++)
	{
		if(Arr[i]==num)
		{
			loc=i;
		}
	}
	if(loc==-1)
	{
		cout<<"value not found"<<endl;
	}
	else
	{
		cout<<"Value found at:"<<loc+1;
	}}
