#include<iostream>
using namespace std;
main()
{
	char letter;
	cout<<"Enter a char:"<<endl;
	cin>>letter;
	if(letter>='a'&& letter<='z')
	{
		cout<<"Enter char is a lower case:"<<letter<<endl;
	}
	else 
	cout<<"Enter char is a uper case:"<<endl;
}
