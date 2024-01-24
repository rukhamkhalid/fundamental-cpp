#include<iostream>
using namespace std;
main()
{ float bs;
cout<<"Enter the amount of basic salary:";
cin>>bs;
//dearnes allowance
float da=(bs/100)*35;
//house rent
float hra=(bs/100)*25;
float gross=bs+da+hra;
cout<<"Gross salary="<<gross;

}
