#include<iostream>
using namespace std;
main()
{
	float bill;
	int units;
	cout<<"Enter  consumed units"<<endl;
	cin>>units;
	if(units>500)
	{
	 bill=units*7;
	}
	else if(units>300)
	{
	 bill=units*5;
	}
	else 
	 {
	 bill=units*2;
	 }
	 bill=bill+150;
	 if(bill>2000)
	 {
	 	bill=bill+(bill*5/100);
	 }
	 cout<<"Total bill="<<bill<<endl;
	}

	

