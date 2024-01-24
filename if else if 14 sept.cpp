#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter three digits number:"<<endl;
	cin>>a>>b>>c;
	if((a!=b)&&(b!=c)&&(c!=a))
	{
		cout<<a<<b<<c<<"\t:";
		cout<<a<<c<<b<<"\t:";
		cout<<b<<a<<c<<"\t:";
		cout<<b<<c<<a<<"\t:";
	}else
	if((a==b)&&(a==c))
	{
		cout<<a<<b<<c<<"\t:";
		cout<<b<<c<<a<<"\t:";
		cout<<c<<a<<b<<"\t:";
	}
    else
	{
		cout<<"not enter numbers:";
	}
}
