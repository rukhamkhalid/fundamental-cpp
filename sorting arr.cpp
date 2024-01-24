#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int temp,arr[50];
	for(int i=0;i<50;i++)
	{
	arr[i]=rand() % 50;
}
   for(int i=0;i<50;i++)
    cout<<arr[i]<<"\t";
   {
   	for(int i=0;i<50;i++)
   	for(int j=1;j<50;j++)
   	{
   		if(arr[i]>arr[j])
   		{
   			temp = arr[i];
   			arr[i]=arr[j];
   			arr[j]=temp;
		   }
	   }
   }
    cout<<endl<<endl;
    for(int i=0;i<50;i++)
    {
    	cout<<arr[i]<<"\t";
	}
}
