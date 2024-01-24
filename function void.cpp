#include<iostream>
using namespace std;
 //function prototype
 //type function name(arguments);
 // void()//----<Acceptable;
 int sum(int a,int b);
 void r(void);
int main()
{    // main function

    int num1,num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2)<<endl;
    r();
    return 0;
    //kya function ko return krny ki zaroorat h//----No (void);
}
int sum (int a,int b)
{
	int c=a+b;
	return c;
}
void r()
{
	cout<<" HeLLO Good morning"<<endl;
}


