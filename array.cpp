#include<iostream>
using namespace std;
main()
{
	int price=786;
	cout<<"Enter a product:";
	int balance[5];
	for(int i=0;i<5;i++)
	{
		cin>>balance[i];
		int item=balance[i]/price;
		int reamining_balance=balance-(item * price);
		cout<<"Customer:"<<i+1<<":"<<endl;
		cout<<"No of item:"<<item;
		cout<<"Remaining balance:"<<reamining_balance;
		
	}
}
