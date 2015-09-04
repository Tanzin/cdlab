#include<iostream>
#include<fstream>
#include<string.h>
#include<locale>
using namespace std;
int main()
{
	locale lc;
	char input[50] ;
	int len= 0;
	cout<<"Enter the exponential number"<<endl;
	cin>>input;
	len = strlen(input);
	//printing the input section............
	//for(int i = 0; i < len; i++ )
	//	cout<<input[i];
	//cout<<endl;
	int noerflag = 1;
	int eloc = 1000; //location of e
	int eflag1 = 0;//decimal is two times
	int eflag2 = 0;//numeric value expected after ...
	int eflag3 = 0;//sign is applied more than one time..
	//finding errors in exponential number ...
	int dotcounter = 0;
	int aftereflag = 0;
	int buff = 10; // buffer to store the digit present just before error..
	for(int i = 0; i < len ; i++ )
	{
		if(input[i] == 'e')//this condition turns on the flag when we are scanning beyond e....
		{
			eloc = i;
			aftereflag = 1;
		}
		//sign error check section..............
		if( i == 0 )
		{
			if((input[0] == '+' || input[i] == '-') && (input[1] == '+' || input[1] == '-'))
			{
				eflag3 = 1;
				noerflag = 0;
			}
		}
		//decimal count error check section.........
		if( input[i] == '.')
		{
			noerflag = 0;
			dotcounter++;
		}
		//alphabet presence error........
		if( isalpha(input[i],lc) && input[i] != 'e' && input[i] != '.')
		{
			noerflag = 0;
			eflag2 = 1;
			if(i > 0)
			{
				if(!isalpha(input[i-1],lc))
					if(input[i-1] == '.')
                                      cout<<">>> numeric value expected after . " <<endl<<endl<<endl;
				else
					buff = ((int)input[i-1]) - 48;
				if(isalpha(input[i-1],lc))
				//if(input[i-1] == '.')
				//	cout<<">>> numeric value expected after . " <<endl<<endl<<endl;
				if(input[i-1] == 'e')
                                        cout<<">>> numeric value expected after e " <<endl<<endl<<endl;
					
			}
		}
		if(input[i] == 'e' && input[i-1] == '.')
		{
			noerflag = 0;
			cout<<">>> numeric value is expected before e " <<endl<<endl<<endl;
		}
	}
	if(dotcounter > 1)
		cout<<">>> .  is used more than once in the exponential number "<<endl<<endl<<endl;
	if(eflag2 == 1 && buff < 10)
		cout<<">>> numeric value expected after " << buff <<endl<<endl<<endl;
	if(eflag3 == 1)
		cout<<">>> +/- sign are used more than once in the exponential number"<<endl<<endl<<endl;
	if(/*eflag1 == 0 && eflag2 == 0 && eflag3 == 0 &&*/ noerflag == 1)
		cout<<"Input is completely correct"<<endl<<endl<<endl;
	return 0;
}
