// Q) Write a program that inputs two numbers in main()function,pass these functions
 //to a function.The function display maximum number?

#include<iostream>
using namespace std;
void max(int,int);
int main()
{
	int a,b;
	cout<<"Enter two numbers:"<<endl;
	cin>>a>>b;
	max(a,b);
	
}
void max(int x,int y)
{
	if(x>y)
{
	cout<<"Maximum number:"<<x<<endl;
}
else
{
	cout<<"Maximum number:"<<y<<endl;
}
}
