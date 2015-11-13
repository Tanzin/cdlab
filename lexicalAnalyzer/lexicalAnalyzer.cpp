#include<iostream>
#include<fstream>
#include<map>
using namespace std;
int main()
{
	char ipbuff[10];
	ifstream fileobj("predef.txt");
	//map which stores the predefined words and symbols categorised as keywords, operators, delimiters etc....
	string name, type;
	map < string, string >predefined;
	while(fileobj>>name>>type)
        {
                predefined[name] = type;
        }
	for( map<string,string>::iterator it=predefined.begin(); it!= predefined.end(); it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
//	int
	return 0;
}
