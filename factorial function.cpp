// Q) Write a program that input a number in main function and pass it into function. The
// function display factorial of that number?

#include<iostream>
using namespace std;
void value(int);
int main()
{
	int num;
	cout<<"Enter a number:";
	cin>>num;
	value(num);
}
void value(int x)
{
	int fact=1;
	for(int i=1;i<=x;i++)
	{
		fact=fact*i;
	}
	cout<<"Factorial="<<fact<<endl;
}
