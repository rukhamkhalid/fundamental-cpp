#include<iostream>
using namespace std;
main()
{
	int r;
	cin>>r;
	for(int i=1;i<=r;i++)
	{
	 for(int j=r;j>i;j--)
	 cout<<"*";
	 cout<<endl;
   }
   return 0;
}

