#include<iostream>
using namespace std;
main()
{
	int n,s;
	s=0;
	cin>>n;
	while(n>0)
	{
		s=s+n;
		cin>>n;
	}
	cout<<s;
}
