#include<iostream>
using namespace std;
main()
{
	int x,y;
	cout<<"Enter x-axis:"<<endl;
	cin>>x;
	cout<<"Enter y-axis:"<<endl;
	cin>>y;
	if(x>0){
		if(y>0)
		cout<<"1st quadrant:"<<endl;
		else
		cout<<"4th quadrant:"<<endl;
}
    else{
    	if(y>0)
    	cout<<"2nd qudrant:"<<endl;
    	else
    	cout<<"3rd quadrant:"<<endl;
	}
}
