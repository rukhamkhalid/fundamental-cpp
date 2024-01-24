#include<iostream>
using namespace std;
main()
{
	char status;
	int senior=400;
	int junior=275;
	cout<<"enter a person status:"<<endl;
	cin>>status;
	if(status=='S'||status=='s')
	{
	cout<<"senior person salary:"<<senior<<endl;
}
    else if(status=='J'||status=='j')
    {
    	cout<<"junior person salary:"<<junior<<endl;
	}
	else
	{
		cout<<"you should select senior or junior try again:"<<endl;
	}
}
