#include<iostream>
using namespace std;
#define AREA(n) 3.14*n*n
#define CUBE(n) n*n*n
#define SQUARE(n) n*n
#define R(h,w) h*w
#define CIR(n) 2*3.14*n
#define PER(t,o) o*100/t
int main()
{
	int AREA = AREA(8);
	cout<<AREA<<endl;
	int CUBE = CUBE(12);
	cout<<CUBE<<endl;
	int SQUARE = SQUARE(6);
	cout<<SQUARE<<endl;
	int R = R(9,2);
	cout<<R<<endl;
	int CIR = CIR(7);
	cout<<CIR<<endl;
	int PER = PER(1100,898);
	cout<<PER<<endl;
	return 0;
}
