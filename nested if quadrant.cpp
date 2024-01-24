#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter a plot:"<<endl;
	cin>>x>>y;
	if(x>0&&y>0){
	 if(x<0)
	  if(y>0)
	   cout<<"2nd quadrant:"<<endl;
	   else
	   cout<<"not 2nd quadrant:"<<endl;
	 if(x<0)
	  if(y<0)
	  cout<<"3rd quadrant:"<<endl;
	    else
	    cout<<"not 3rd quadrant:"<<endl;
	  if(x>0)
	    if(y<0)
	    cout<<"4th quadrant:"<<endl;
	    else 
	    cout<<"not 4th quadrant:"<<endl;
	 }
	 else
	 cout<<"1st quadrant:"<<endl;
}
