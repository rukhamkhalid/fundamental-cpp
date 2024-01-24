#include<iostream>
using namespace std;
main()
{
	int n=10;
	int *p=&n;
	*p=30;
	cout<<n;
}
