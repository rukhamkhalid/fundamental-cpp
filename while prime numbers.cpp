#include<iostream>
using namespace std;
main()
{
	int i,j,count=0;
	cout<<"Enter the number:";
	cin>>i;
	j=1;
	while(j<=i)
	{
		if(i%j==0)
		count++;
		j++;
	}
	if(count==2)
	cout<<"prime number:"<<endl;
	else
	cout<<"not prime number:"<<endl;
}
