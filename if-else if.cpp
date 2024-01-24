#include<iostream>
using namespace std;
main()
{
	int x,y;
	cout<<"Enter a qaudrant:"<<endl;
	cin>>x>>y;
	if (x>0&&y>0)
	   cout<<"1st quadrant:"<<endl;
	else if (x<0&&y>0)
	   cout<<"2nd quadrant:"<<endl;
	else if (x<0&&y<0)
	   cout<<"3rd quadrant:"<<endl;
	else if (x>0&&y<0)
	   cout<<"4th quadrant:"<<endl;
	 else
	  cout<<"program terminated"<<endl;
}
