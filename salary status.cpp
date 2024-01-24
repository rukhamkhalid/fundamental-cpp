#include<iostream>
using namespace std;
main()
{
	char status;
	int junior=275;
	int senior=400;
	cout<<"Enter the status of person:"<<endl;
	cin>>status;
	if(status=='S'||status=='s')
	{
		cout<<"senior person salary:"<<endl;
	}
	else if(status=='J'||status=='j')
	{
		cout<<"junior person salary:"<<endl;
	}
	else
	 cout<<"invalid salary:"<<endl;
}
