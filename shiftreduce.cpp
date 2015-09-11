//program to perform shift reduce operatin on string..
//Ajay negi 
#include<iostream>
using namespace std;
int main()
{
	string stack, ipBuff;
	int size;
	int stackCase;
	cout<<"enter input buffer without spaces, eg d+d*d :"<<endl;
	cin>>ipBuff;
/*	while (getline(cin, ipBuff)) {
		    // do something with the line
	}*/
	size = ipBuff.length();
	cout<<ipBuff<<endl;
	cout<<"size of input string :"<<size<<endl;
	int i = 0;
	while(i < size)
	{
		if(ipBuff[i] == 'd')
			stack += 'E';
		else
			stack += ipBuff[i];
		if(stack == "E+E")
			stackCase = 1;
		else if(stack == "E*E")
			stackCase = 2;
		switch(stackCase)
		{
			case 1:
				stack = 'E';
				break ;
			case 2:
				stack = 'E';
		}
		i++;
	}
	if(stack == "E")
		cout<<"input buffer accepted"<<endl;
	else
		cout<<"not accepted"<<endl<<endl<<endl;
	return 0;	
}
