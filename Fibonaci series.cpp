//Q)Write a program that inputs a number and displays n Fibonaci terms.In Fibonacci sequence
//sum of two successive terms gives the third terms.
// 0    1    1    2    3    5    8    13     21
#include<iostream>
using namespace std;
int main()
{
  int a=0;
  int b=1;
  int next,num,count=2;
  cout<<"Limit"<<endl;
  cin>>num;
  cout<<a<<"\t"<<b;
  while(count<num)	
  {
      next=a+b;
      cout<<"\t"<<next;
      count++;
      a=b;
      b=next;
  }
}
