#include<iostream>
#include<cmath>
using namespace std;
main()
{ float a,b,c;
cout<<"Enter the value of (a) side=";
cin>>a;
cout<<"Enter the value of (b) side=";
cin>>b;
cout<<"Enter the value of (c) side=";
cin>>c;
float s=(a+b+c)/2;
float area=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<"Area of a triangle is="<<area;

}
