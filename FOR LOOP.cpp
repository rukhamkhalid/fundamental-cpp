#include<iostream>
using namespace std;
 int main()
{
	int n,count=0,j;
	cout<<"Enter any number:"<<endl;
	cin>>n;
	for(j=1;j<=n;j++)
	{
		if(n%j==0)
		{
		count++;
	}
    }
	if(count==2)
		cout<<"Prime number:";
		else
		cout<<"Not Prime number:";
}
