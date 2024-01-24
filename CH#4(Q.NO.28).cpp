#include<iostream>
using namespace std;
main()
{ float sub1,sub2,sub3,sub4,sub5;
cout<<"Enter the marks of English:";
cin>>sub1;
cout<<"Enter the marks of Math:";
cin>>sub2;
cout<<"Enter the marks of Urdu:";
cin>>sub3;
cout<<"Enter the marks of Computer:";
cin>>sub4;
cout<<"Enter the marks of Physics:";
cin>>sub5;
float sum=sub1+sub2+sub3+sub4+sub5;
float percentage=sum/5;
cout<<"Total marks="<<sum<<endl;
cout<<"Percentage="<<percentage;
}
