#include<iostream>
using namespace std;
main()
{
	int price=786;
	cout<<"Enter a balance:";
	int balance[5];
	int item[5];
	int remaining_balance[5];
	for(int i=0;i<5;i++)
	{
		cin>>balance[i];
		item[i]=balance[i]/price;
		remaining_balance[i]=balance[i]-(price*item[i]);
	}
	  for(int i=0;i<5;i++)
	{
		cout<<"Customer"<<i+1<<":"<<endl;
		cout<<"No of item:"<<item[i]<<endl;
		cout<<"Remaining balance:"<<remaining_balance[i]<<endl;
	}
}
