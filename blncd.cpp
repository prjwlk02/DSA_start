#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool  IsBalanced(string brackets)
{
	stack<char> o_brackets;
	
	for(int i=0;i<brackets.length();i++)
	{
		if(brackets[i]=='(' || brackets[i]=='{' )
			o_brackets.push(brackets[i]);
	
	else 
	{
		if(o_brackets.empty())
			return false;
		char top=o_brackets.top();
			o_brackets.pop();
		if(top=='(' && brackets[i]!=')')
			return false;
		if(top=='{' && brackets[i]!='}')
			return false;
	}
	}
return o_brackets.empty();
}


int main()
{
	
	string brackets;
	cin>>brackets;
	if(IsBalanced(brackets))
	cout<<"Success";
	else
	cout<<"Failed";
}
