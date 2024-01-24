//BINARY SEARCH
//Arr[10]={10,20,30,40,50,60,70,80,90,100};
//num=20;
//mid=0+9/2=4

#include<iostream>
using namespace std;
int main()
{
	int Arr[10]={10,20,30,40,50,60,70,80,90,100};
	int num,mid,start,end,loc=-1;
	start=0;
	end=9;
	cout<<"Enter Value for search:";
	cin>>num;
	while(start<=end)
	{
		mid=(start+end/2);
		if(Arr[mid]==num)
		{
			loc=mid;
			break;
		}
	   else if(num<Arr[mid])
	 {
	 	end=mid-1;
		 }	
	  else
	  start=mid+1;
}	if(loc==-1)
	{
		cout<<"value not found"<<endl;
	}
	else
	{
		cout<<"Value found at:"<<loc+1;
	}}

