#include<iostream>
#include<map>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
	map <string ,string>m;
	map <int, string>kword;
	map <string , string>::iterator iter;
	kword[1] = "while";
	kword[2] = "do";
	kword[3] = "else";
	kword[4] = "if";
	kword[5] = "switch";
	int  i ,j , k , f, len,t;
	char exp[100] , word [20][200];
	cout<<"enter the expression: "<< endl;
	gets(exp);
	len = strlen(exp);
	t = 0;
	for(i = 0;  i < len; i++ )
	{
		j= 0;f = 0;
		if(isalpha(exp[i]))
		{while(isalpha(exp[i]||isdigit(exp[i]))
		{
			word[t][i] = exp[i];
			i++; j++;
		}
		word[t][i] = "\0";
		i--;
		for(k = 1 ; k < 6; k++ )
		{
			if(word[t] == kword[k])
			{
				f = 1;break;
			}
		}
		if(f = 0)
		{if(exp[i+1] == 'c')
			m[word[t]] = "is a function"<<endl;
		else
			m[word[t]] = " is an indentifier."<<endl;
		}
		else if (isdigit(exp[i]))
		{
			while(isdigit(exp[i]))
			{
				word[t][i] = exp[i];
				i++;j++;
			}
			i--;
			word[t][i] = "\0";
			m[word[t]] = " is a constant"<<endl;
		}
		t++;
	}
	cout<<"name :"<<"\t\t"<<"type"<<endl;
	cout<<".................."<<"\t\t"<<"................."<<endl;
		for(iter = m.begin();iter!= m.end();iter++)
			cout<<iter.first()<<"\t\t"<<iter.second<<endl;
	return 0;
}	
