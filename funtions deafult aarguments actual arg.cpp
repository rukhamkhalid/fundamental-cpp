#include<iostream>
using namespace std;
inline int pro(int a,int b)
{
 return a*b;
}
  float moneyreceived(int currentmoney,float factor=1.04 )
  {
  return currentmoney*factor;
}
main()
{
	int a,b;
	int money=10000;
	cout<<"if you have "<<money<<" Rs in your bank account, yoi will receive "<<moneyreceived(money)<<"Rs after 1 year";
	return 0;
}
