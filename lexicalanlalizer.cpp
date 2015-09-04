#include<iostream>
#include<fstream>
#include<locale>
using namespace std;
int main()
{
	int counter = 0;
	int countkey = 0;
	int counterif = 0;
	int counterelse = 0;
	char c;
	locale loc;
	string key;
	char store[100];
	cout<<"sample file is: "<<endl;
        ifstream ip;
        ip.open("sample_file.txt");
	int i = 0;
        while(ip)
                {
			ip.get(c);
                        store[i] = c;
			i++;
                        cout<<c;
                }
	int size = i;
	for(int j = 0; j < size; j++ )
	{
		if(store[j] == '(' || store[j] == ')' || store[j] == '=' || store[j] == '+' || store[j] == '<')
		{
			counter++;
		}
	}
	cout<<"the number of opertors is : "<<counter<<endl;
	for(int j = 0; j < size ; j++ )
	{
		if( store[j] == 'i' && store[j+1] == 'f' && !isalpha(store[j+2],loc))
			counterif++;
	}

	for(int j = 0; j < size ; j++ )
        {
                if( store[j] == 'e' && store[j+1] == 'l' && store[j+2] == 's' && store[j+3] == 'e' /*!isalpha(store[i+2],loc)*/)
                        counterelse++;
        }
	cout<<"else : "<<counterelse<<endl;	
	cout<<"if : "<<counterif<<endl;
        ip.close();
	return 0;
}
