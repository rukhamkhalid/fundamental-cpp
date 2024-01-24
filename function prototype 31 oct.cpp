#include<iostream>
using namespace std;
 //function prototype
 //type function name(arguments);
 // int sum(int a,int b)//--->Acceptable
 // int sum(int, int)//---->Acceptable
 int sum(int a, int b);
int main()
{    // main function

    int num1,num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2);
    return 0;
    //a ,b jo humny function m bnaye hn //----<formal parameters
    // num1,num2 values hoti hyn jo funtion ko pass krai gai hn//-----<actual parameters 
}
    int sum(int a,int b)
{
	int c= a+b;
	return c;
}

	
