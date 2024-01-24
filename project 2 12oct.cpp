#include<iostream>
#include<cstdlib>
#include<windows.h>
using namespace std;
main()
{
	system ("Color C");
	int total=1100;
	int English[10];
	int Physics[10];
	int Urdu[10];
	int Computer[10];
	int Math[10];
	int Ps[10];
	int Islamiyat[10];
	int Physics_p[10];
	int Computer_p[10];
	int total_obt[10];
	int Per[10];
	for(int i=0;i<10;i++)
	{
	  English[i]=rand() %  200;
	  Urdu[i]=rand()	%  200;
	  Islamiyat[i]=rand() % 50;
	  Ps[i]=rand() % 50;
	  Math[i]=rand() % 200;
	  Physics[i]=rand() % 170;
	  Computer[i]=rand() % 150;
	  Physics_p[i]=rand() % 30;
	  Computer_p[i]=rand() % 50;
	  total_obt[i]=English[i]+Physics[i]+Computer[i]+Math[i]+Ps[i]+Urdu[i]+Islamiyat[i]+Physics_p[i]+Computer[i];
	  Per[i]=total_obt[i]*100/total;
	}
	
}
