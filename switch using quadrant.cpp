#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter the x-axis and y-axis:"<<endl;
	cin>>x>>y;
	switch (x>0){
	    case 1:
	 switch (y>0){
	    case 1:
	    cout<<"1st quadrant:";
	    break;
	    case 0:
	    cout<<"4th quadrant:";
		break;}
		case 0:
	  switch ( y<0){
	    case 1:
	    cout<<"2nd quadrant:";
	    break;
	    case 0:
	    cout<<"3rd quadrant:";
	    break;
		}
		}  }
		
	
