#include<iostream> 
#include<cmath>
using namespace std;
main()
{
	int x1,y1;
	cout<<"enter first point x1,y1:"<<endl;
	cin>>x1>>y1;
	int x2,y2;
	cout<<"enter second point x2,y2:";
	cin>>x2>>y2;
	int d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	cout<<"distance of two points:"<<d;
}
