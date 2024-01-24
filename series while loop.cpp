// 1+1/2+1/4+1/6+1/8+......+1/100

#include<iostream>
using namespace std;
int main()
{
	float c,r;
	c=2.0;
	r=1;
	while(c<=100)
	{
		r=r+1.0/c;
		c=c+2;
	}
}
