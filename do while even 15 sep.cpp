#include<iostream>
using namespace std;
main()
{
	int n,evensum=0,oddsum=0;
	cin>>n;
	do
	{
		if(n%2==0)
		evensum=evensum+n;
		else
		oddsum=oddsum+n;
		cin>>n;
	}
	while(n>0);
	cout<<"sum off even numbers:"<<evensum<<endl;
	cout<<"sum off odd numbers:"<<oddsum<<endl;
}
