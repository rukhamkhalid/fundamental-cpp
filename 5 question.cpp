#include<iostream>
using namespace std;
main()
{
	char ans[5] ={'a','b','c','b','a'}, in;
	string ques[5];
	ques[0] = "which one is Low level Language?na) Assembly b) C++ C) Python d) Java";
	ques[1] = "which one is not keyword?\na) int b) if c) const d) def";
	ques[2] = "which one is selection keyword?\na) const b) for c) if d) None";
	ques[3] = "Data type of \"Name\" is:\na) int b) string c) char d) float";
	ques[4] = "C language was Developed in: \na) 1972 b) 1969 c) 1973 d) 1956";
	int counter=0;
	for(int i=0;i<5;i++)
{
      cout<<ques[i]<<endl;
  	  cin>>in;
  	  if(ans[i]==in)
  	{
  		counter++;
	  }
}
    if(counter==5)  cout<<"Excellent" ;
    else if(counter==4)
	cout<<"very good";
    else 
	cout<<"Keep time to brush up your knowledge";
    return(0);
}
