#include<iostream>
using namespace std;
main()
{ int a,b,c,d;
cout<<"Enter the value of a variable:";
cin>>a;
cout<<"Enter the value of b variable:";
cin>>b;
cout<<"Enter the value of c variable:";
cin>>c;
d=a;
a=c;
c=b;
b=d;
cout<<" swaping of three variables a,b,c is="<<a<<b<<c;
}
