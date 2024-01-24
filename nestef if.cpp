#include<iostream>
using namespace std;
main()
{
	int p,d;
	cout<<"Enter no of particepents and dishes:"<<endl;
	cin>>p>>d;
	if(p>200){
		if(d==6)
		{ cout<<"flaty hotel:"<<endl;
		}
		else
		cout<<"4 star hotel:"<<endl;
	}
	else
	cout<<"home made:";
}

