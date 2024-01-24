#include<iostream>
using namespace std;
main()
{
	int i;
	cin>>i;
	cout<<"a\tb"<<endl;
	for(int a=1;a<i;a=a+2)
	{
		cout<<a<<"\t"<<a-i<<endl;
	}
}
