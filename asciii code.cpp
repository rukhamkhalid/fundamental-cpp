//Q)Write a program that converts ASCIII number to character and vice versa?
//1)Convert ASCIII vAlue to Character(65 = A ,SIMILARLY 97 = a)
//2)Convert character to ASCIII Value(A = 65 ,SIMILARLY a = 97)



#include<iostream>
using namespace std;
main() 
{
	int number,option;
	char letter;
	cout<<"1 for convert ASCIII value to Character"<<endl;
	cout<<"2 for convert Character to ASCIII value"<<endl;
	cin>>option;
	switch(option)
	{
		case 1:
			{
				cout<<"Enter a number:";
				cin>>number;
				cout<<"Character is:"<<char(number)<<endl;
				break;
			}
			case 2:
			{
				cout<<"Enter an Character:";
				cin>>letter;
				cout<<"Number is:"<<int(letter)<<endl;
				break;
			}
			default:
				{
					cout<<"Invalid"<<endl;
				}
	}
}
