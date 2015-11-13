#include<iostream>
#include<fstream>
#include<map>
#include<string.h>

using namespace std;
int main()
{
        char ipbuff[10];
	//fileobject for predefined data
        ifstream fileobj("predef.txt");
	//file object for reading source file..
	ifstream sourcefile("source.txt");
        //map which stores the predefined words and symbols categorised as keywords, operators, delimiters etc....
        string name, type, temp;
	//defining a map which knows what is what.. :P
        map < string, string >predefined;
	//inserting the info into map from the predef.txt file...
        while(fileobj>>name>>type)
        {
                predefined[name] = type;
        }
	while(sourcefile)
	{
		int flag = 0;//flag turn on if temp is not matched with any predef..
		sourcefile>>temp;//enter the words of file one by one..
		//compare the words with the predef...........
        	for( map<string,string>::iterator it=predefined.begin(); it!= predefined.end(); it++)
        	{
                	if(!(temp.compare(it->first)))
			{
				flag = 1;
				cout<<temp<<" is "<<it->second<<endl;
			}
        	}
		//if flag is 0 it means no word is matched.. thus it is either identifer or function...
		if(flag == 0)
		{
			if(isalpha(temp[0]))
				if(temp.find('(') != std::string::npos )//if it is a function then it will definetly contain '('...
					cout<<temp<<" is a function"<<endl;
				else
					cout<<temp<<" is identifer"<<endl;
			else
				cout<<temp<<" is constant"<<endl;
		}
	}
        return 0;
}
