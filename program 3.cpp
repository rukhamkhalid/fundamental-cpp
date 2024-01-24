#include <iostream>
using namespace std;
main()
{
	int a,b,c,s,A;
	cout<<"Enter side a";
	cin>>b;
	cout<<"Enter side b";
	cin>>b;
	cout<<"Enter side c";
	cin>>c;
	s=(a+b+c)/2;
	A=(s*(s-a)*(s-b)*(s-c));
	cout<<"Area is"<<A;
}
