#include<iostream>
using namespace std;
main()
{ int a;
cout<<"Enter a five digit number:";
cin>>a;
int b,c,d,e,g;
b=a/10000;
a=a%10000;
c=a/1000;
a=a%1000;
d=a/100;
a=a%100;
e=a/10;
a=a%10;
 g=b+c+d+e+a;
cout<<"sum of a five digit number is="<<g;

}
