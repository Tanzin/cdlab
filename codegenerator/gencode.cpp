#include<iostrea m>
#include<fstream>

using namespace std;
int main()
{
	struct tac
	{
		char left;
		char right[10];
	}tac[10];
	
	char input[100];
	cin>>input;
	int i = 0;
	int j = 0;
	while(input[i] != '\0')
	{
		int flag = 0;
		if(flag == 0)
		{
			if(isalpha(input[i]))
			{
				tac[i].left = input[i];
			}
			else if(!isalpha(input[i]))
			{
				flag = 1;
			}
		}
		
			if(flag == 1)
			{
				if(isalpha(input[i]))
				{
					tac[i].right[j] = input[i];
					j++;
				}
				else if(!isalpha(input[i]))
				{
					flag = 0; j = 0;
				}
			}
		i++;
	}
//printing the input section..........
	while(tac[i] != '\0')
	{
		
	}
	return 0;
}
