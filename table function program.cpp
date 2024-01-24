// Q) Write a value from user and pass into function . Display the table of this number?

#include<iostream>
using namespace std;
void table(int);
int main()
{
	int num;
	cout<<"Enter the number:";
	cin>>num;
	table(num);
}
void table(int x)
{
	for(int i=0;i<=10;i++)
	{
		cout<<x<<"*"<<i<<"="<<x*i<<endl;
	}
}
