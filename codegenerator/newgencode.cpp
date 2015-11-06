#include<iostream>
using namespace std;
int main()
{
	int num;
	char op;
	char instr[10][10];
	char left, right1, right2;
	cout<<"enter the number of instructions: ";
	cin>>num;
	for(int i = 0; i < num; i++ )
	{
		cin>>instr[i];
	}
	for(int i = 0 ; i < num ; i++ )
	{
		
			left = instr[i][0];
			right1 = instr[i][2];
			right2 = instr[i][4];
			op = instr[i][3];
			cout<<"MOV "<<right1<<","<<"R"<<i<<endl;
			if(op == '+')
				cout<<"ADD "<<right2<<","<<"R"<<i<<endl;
			
			if(op == '*')
				cout<<"MUL "<<right2<<","<<"R"<<i<<endl;
			cout<<"MOV "<<"R"<<i<<","<<left<<endl;
	}
	return 0;
}
