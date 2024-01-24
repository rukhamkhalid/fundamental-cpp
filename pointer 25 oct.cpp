#include<iostream>
using namespace std;
main()
{
	//What is pointer?    data type with holds the adress of other data types (store adress)
	
	int a=8;
	int* b=&a;
	
	//&......>Adress of operator
	//*.......>(value at) Derefrence operator
	
	cout<<"The adress of a is "<<&a<<endl;
	cout<<"The adress of a is "<<b<<endl;
	cout<<"The value at adress b is "<<*b<<endl;
}
