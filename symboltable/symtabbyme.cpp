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
	int ifcnt= 0;
	int elsecnt = 0;
	int opcnt = 0;
	int dlcnt = 0;
	// if counting section................
	while(buffer[i] != '\0')
	{
	
		if(!isalpha(buffer[i-1])&& buffer[i] == 'i' && buffer[i+1] == 'f' && !isalpha(buffer[i+2]))
			ifcnt++;
		
		if(!isalpha(buffer[i-1]) && buffer[i] == 'e' && buffer[i+1] == 'l' && buffer[i+2] == 's' && buffer[i+3] == 'e' && !isalpha(buffer[i+4]))
                        elsecnt++;

		if( (buffer[i] == '<' | buffer[i] == '=' | buffer[i] == '+') && buffer[i+1] != '=')
                        opcnt++;

		if((buffer[i] == '('| buffer[i] == ')' | buffer[i] == ';' )&& buffer[i+1] != '=')
                        dlcnt++;
		if(!isalpha(buffer[i-1]) && isalpha(buffer[i]))
		while( isalpha(buffer[i]) || isdigit(buffer[i]) )
		{
		
		}
		i++;
	}

	cout<<"occurence of if :" << ifcnt<<endl;
	cout<<"occurence of else: "<<elsecnt<<endl;
	cout<<"no. of occurence of operators :" << opcnt<<endl;
        cout<<"no. of occurence of delimiters :" << dlcnt<<endl;
	
	return 0;
}
