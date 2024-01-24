#include<iostream>
using namespace std;
main()
{ 
    int s;
    cin>>s;
	for(int i=0;i<=s;i++)
	{
		for(int j=0;j<=s-i;j++)
		cout<<" ";
	 for(int j=0;j<=i;j++)
	 cout<<"* ";
	 cout<<endl;
}
}
