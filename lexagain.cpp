#include<iostream>
#include<fstream>

using namespace std;
int main()
{
	FILE *fp;
	fp = fopen("sample.txt","r");
	int ch = getc(fp);
	char buffer[100]= "0";
	int i = 0;
	while(ch != EOF)
	{
		putchar(ch);
		buffer[i] = (char) ch;
		i++;
		ch = getc(fp);
	}
	if(feof(fp))
		cout<<"complete file is studied\n";
	
	fclose(fp);
	i = 0;
	int cnt = 0;
	// if counting section................
	while(buffer[i] != '\0')
	{
	//	cout<<buffer[i];
		if(!isalpha(buffer[i-1])&& buffer[i] == 'i' && buffer[i+1] == 'f' && !isalpha(buffer[i+2]))
			cnt++;
		i++;
	}
	int ifcnt = cnt;
	cnt = 0;
	cout<<"occurence of if :" << ifcnt<<endl;

	// else counting section................
	i = 0; cnt = 0;
        while(buffer[i] != '\0')
        {
                if(!isalpha(buffer[i-1]) && buffer[i] == 'e' && buffer[i+1] == 'l' && buffer[i+2] == 's' && buffer[i+3] == 'e' && !isalpha(buffer[i+4]))
                        cnt++;
                i++;
        }
        int elsecnt = cnt;
        cnt = 0;
        cout<<"occurence of else :" << elsecnt<<endl;

	//operator counting section..............
	i = 0; cnt = 0;
	while(buffer[i] != '\0')
        {
                if( (buffer[i] == '<' | buffer[i] == '=' | buffer[i] == '+') && buffer[i+1] != '=')
                        cnt++;
                i++;
        }
	int opcnt = cnt;
        cnt = 0;
        cout<<"no. of occurence of operators :" << opcnt<<endl;

	
	//delimiter counting section..............
        i = 0; cnt = 0;
        while(buffer[i] != '\0')
        {
                if((buffer[i] == '('| buffer[i] == ')' | buffer[i] == ';' )&& buffer[i+1] != '=')
                        cnt++;
                i++;
        }
        int dlcnt = cnt;
        cnt = 0;
        cout<<"no. of occurence of delimiters :" << dlcnt<<endl;
	
	return 0;
}
