#include<iostream>
using namespace std;
main()
{
	int h,h1,h2,m,m1,m2,s,s1,s2;
	cout<<"Enter Hours,Minuites,Seconds:";
	cin>>h1>>m1>>s1;
	cout<<"Enter Hours2,Minuites2,Seconds2:";
	cin>>h2>>m2>>s2;
	 s1=(h1*3600)+(m1*60)+s1;
	 s2=(h2*3600)+(m2*60)+s2;
	 s=s1+s2;
	 cout<<"Total time in seconds:"<<s<<endl;
	 h=s/3600;
	 s=s%3600;
	 m=s/60;
	 s=s%60;
	  cout<<"Total time is:"<<h<<":"<<m<<":"<<s;
}
