#include<iostream>
using namespace std;
main()
{
	 int m[5],total_marks;
	 int p[5];
	 cin>>total_marks;
	 for(int i=0;i<=4;i++)
	 cin>>m[i];
	 for( int i=0;i<=4;i++)
	 p[i]=m[i]*100/total_marks;
	 for(int i=0;i<5;i++)
	 cout<<"Student"<<i+1<<":"<<endl<<"Marks:"<<m[i]<<"\tpercentage:"<<p[i]<<endl;
	 
}
