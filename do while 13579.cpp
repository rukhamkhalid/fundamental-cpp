#include<iostream>
using namespace std;
main()
{
	int a,i;
	a=1;
	cout<<"a\tb"<<endl;
	cin>>i;
	do
	{
		cout<<a<<"\t"<<i-a<<endl;
		a=a+2;
	}
	while(a<i);	
}
