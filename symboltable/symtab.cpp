#include<iostream>
#include<fstream>

#include<ostream>
#include<string.h>
using namespace std;

int main()
{
	char a;
	char c;
	ifstream ip;
	ip.open("sample.txt");
	char output[100];
	int i = 0;
	if (ip.is_open()) 
	{
		while (!ip.eof()) 
		{
			//ip.get(c);
			ip >>output;
			//output[i] = c;
			i++;
			//cout<<output;
		}
	}
	ip.close();
	int size = i;
	int k = 0;	
	ifstream ifs("sample.txt");
	string content( (istreambuf_iterator<char>(ifs) ),(istreambuf_iterator<char>()    ) );
//	int len = strlen(content);
//	cout<<len;
		cout<<content;
		k = 0;
	while( a != '\0')
	{
		a = content[k];
		cout<<content[k];
		k++;
	}
	return 0;
}
