#include<iostream>
using namespace std;
main()
{
	int arr[8];
	int *p=arr;
	for(int i=0;i<8;i++)
	cin>>*(p+i);
	for(int i=0;i<8;i++)
	{
		cout<<(*(p+i))*2<<endl;
	}
}
