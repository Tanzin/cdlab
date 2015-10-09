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
	cout<<"Stack"<<"\t\t\t\tipbuff"<<"\t\t\t\taction"<<endl;
	cout<<"____________________________________________________________________________________________"<<endl;
	while(i < size)
	{
		if(ipBuff[i] == 'd')
		{
			stack += 'E';
			for(int a = 0 ; a < stack.length()-1;a++)cout<<stack[a];cout<<"d";cout<<"\t\t\t\t";for(int a = i+1; a< size; a++ )cout<<ipBuff[a];cout<<"\t\t\t\tshift"<<endl;
			cout<<stack;cout<<"\t\t\t\t";for(int a = i+1; a< size; a++ )cout<<ipBuff[a];cout<<"\t\t\t\tReduced"<<endl;
		}
		else
		{
			stack += ipBuff[i];
			cout<<stack;cout<<"\t\t\t\t";for(int a = i+1; a< size; a++ )cout<<ipBuff[a];cout<<"\t\t\t\tshift"<<endl;
		}
		if(stack == "E+E")
		{
		//	cout<<stack;cout<<"\t\t\t\t";for(int a = i+1; a< size; a++ )cout<<ipBuff[a];cout<<"\t\t\t\tshift"<<endl;
			stackCase = 1;
		}
		else if(stack == "E*E")
		{
		//	cout<<stack;cout<<"\t\t\t\t";for(int a = i+1; a< size; a++ )cout<<ipBuff[a];cout<<"\t\t\t\tshift"<<endl;
			stackCase = 2;
		}
		//printing the table section........................
		
		switch(stackCase)
		{
			case 1:
				stack = 'E';

				cout<<stack;cout<<"\t\t\t\t";for(int a = i+1; a< size; a++ )cout<<ipBuff[a];cout<<"\t\t\t\tReduced"<<endl;
				break ;
			case 2:
				stack = 'E';
				cout<<stack;cout<<"\t\t\t\t";for(int a = i+1; a< size; a++ )cout<<ipBuff[a];cout<<"\t\t\t\tReduced"<<endl;
				break;
		}
		i++;
	}
	if(stack == "E")
		cout<<"input buffer accepted"<<endl;
	else
		cout<<"not accepted"<<endl<<endl<<endl;
	return 0;	
}
