#include<iostream>
#include<cstdlib>
using namespace std;
main()
{
	int price=28;
	int balance[1000];
	int item[1000];
	int remaining_balance[1000];
	for(int i=0;i<1000;i++)
	{
		balance[i]=rand() % 1000;
		item[i]=balance[i]/price;
		remaining_balance[i]=balance[i]-(price*item[i]);
	}
	  for(int i=0;i<1000;i++)
	{
		cout<<"Customer"<<i+1<<" "<<"Balance"<<balance[i]<<endl;
		cout<<"No of item:"<<item[i]<<endl;
		cout<<"Remaining balance:"<<remaining_balance[i]<<endl<<endl;
	}
}
