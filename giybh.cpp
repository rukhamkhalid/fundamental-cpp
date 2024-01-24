#include<iostream>
using namespace std;
main()
{
	int a,i;
	a=1;
	cout<<"a\tb"<<endl;
	cin>>i;
	while(a<i)
	{
	  cout<<a<<"\t"<<i-a-1<<endl;	
	  a=a+2;
	}
}
