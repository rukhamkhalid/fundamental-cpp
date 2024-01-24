#include<iostream>
using namespace std;
main()
{
	for(int date=1;date<=30;date++)
	{
		int pocketmoney=3000;
		if(date%2==0)
		{
		//continue statement is used tob skip the next iteration of the loop//-----continue;
		continue;
     	}
	if(pocketmoney==0)
	{
		//terminate the loop//----<break;
		break;
	}
		cout<<"GO out today "<<endl;
		pocketmoney=pocketmoney-300;
	}
}
