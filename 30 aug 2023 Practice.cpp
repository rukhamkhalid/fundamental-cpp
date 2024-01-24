#include<iostream>
using namespace std; 
int main (){
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	cout<<endl;
	if(age>18)
		cout<<"You can Drive!!!";
	else if(age<18)
		cout<<"You can't Drive"<<endl;
	else
		cout<<"Get you licence";
	
	cout<<"Program Terminated";
}
