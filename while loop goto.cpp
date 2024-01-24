#include<iostream>
using namespace std;
main()
{
	int n,fact,i;
	fact=1;
	i=1;
	cout<<"Enter no of factorial:";
	cin>>n;
	while(i<=n)
	{
	 fact=fact*i;
	 i++;
    }
	 cout<<"factorial of the number is:"<<fact<<endl;
}
