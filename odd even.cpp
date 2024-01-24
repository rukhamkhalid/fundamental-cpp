#include<iostream>
using namespace std;
main()
{
	int  n,oddsum=0,evensum=0;
	cin>>n;
	while(n>0)
	{
	 if(n%2==0)
	 evensum=evensum+n;
	 else
	 oddsum=oddsum+n;
	 cin>>n;
	 }
	 cout<<"sum of even numbers:"<<evensum<<endl;
	 cout<<"sum of odd numbers:"<<oddsum<<endl;
}
