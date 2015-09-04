//program to check if the input string is accepted by the grammer(grammer is assumed by programmer himself)
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
		string ipString;
		int state = 0;
		int i = 0;
		cin>>ipString;
		while(ipString[i])
		{
			switch(state)
			{
				case 0 :
				if(ipString[i] == 'a')
					state = 0;
				else if(ipString[i] == 'b')
					state = 1;
				else if(ipString[i] == 'c')
					state = 2;
				else
				{
					cout<<"not accepted"<<endl;
					return 0;
				}
				break ;

				case 1 :
				if(ipString[i] == 'a')
				{
					cout<<"not accepted"<<endl;
				}
				else if(ipString[i] == 'b')
					state = 1;
				else if(ipString[i] == 'c')
					state = 2;
				else
				{
					cout<<"not accepted"<<endl;
					return 0;
				}
				break ;

				
				case 2 :
				if(ipString[i] == 'a')
				{
					cout<<"not accepted"<<endl;
				}
				else if(ipString[i] == 'b')
				{
					cout<<"not accepted"<<endl;
				}
				else if(ipString[i] == 'c')
					state = 3;
				else
				{
					cout<<"not accepted"<<endl;
					return 0;
				}
				break ;

				
				case 3 :
				if(ipString[i] == 'a')
				{
					cout<<"not accepted"<<endl;
				}
				else if(ipString[i] == 'b')
				{
					cout<<"not accepted"<<endl;
				}
				else if(ipString[i] == 'c')
					state = 2;
				else
				{
					cout<<"not accepted"<<endl;
					return 0;
				}
				break ;
			}
			i++;	
		}
		if(state == 0 || state == 1 || state == 3)
			cout<<"input string is accepted"<<endl;
		else
			cout<<"input string is not accepted"<<endl;
		
		return 0;
}
