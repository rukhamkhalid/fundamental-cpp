#include<iostream>
using namespace std;
main()
{ 
    int s=5;
	for(int i=0;i<=5;i++)
	{
		for(int j=0;j<=s-i;j++)
		cout<<" ";
	 for(int j=0;j<=i;j++)
	 cout<<"* ";
	 cout<<endl;
}
}
