#include<iostream>
using namespace std;
main()
{
	int price=786;
	cout<<"Enter a balance:";
	int balance[5];
	int item;
	int remaining_balance;
	for(int i=0;i<5;i++)
	{
		cin>>balance[i];
		item=balance[i]/price;
		remaining_balance=balance[i]-(price*item);
		cout<<"Customer:"<<i+1<<":"<<endl;
		cout<<"No of item:"<<item<<endl;
		cout<<"Remaining balance:"<<remaining_balance<<endl;
		
	}
}
