#include<iostream>
#include<map>
#include<utility>
#include<string.h>
using namespace std;
int main()
{
	map <int, string>rolno;
	rolno[13505] = "mukul";
	rolno[13501] = "Reena";
	rolno[13503] = "kando";
	rolno[13502] = "Puneet";
	
	rolno[13504] = "rana";
	
	
	for( map<int,string>::iterator i = rolno.begin(); i !=rolno.end(); i++ )
	{
		cout<<(*i).first<< ": "<<(*i).second<<endl;
	}
	return 0;
}
