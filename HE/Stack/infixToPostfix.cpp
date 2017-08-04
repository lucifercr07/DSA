#include <iostream>
#include <stack>

using namespace std;

bool isOpenParentheses(char s)
{
	if(s=='(' || s=='{' || s=='[')
		return true;
	return false;
}

bool isCloseParentheses(char s)
{
	if(s==')' || s=='}' || s==']')
		return true;
	return false;
}

bool isRightAssociative(char s)
{
	if(s=='^')
		return true;
	return false;
}

int calc(char s)
{
	int weight=-1;
	switch(s)
	{
		case '+':
		case '-':
			weight=1;
			break;
		case '*':
		case '/':
			weight=2;
			break;
		case '^':
			weight=3;
			break;
	}
	return weight;
}

bool hasHighPrecedence(char s, char t)
{
	int opwt1= calc(s);
	int opwt2= calc(t);

	if(opwt1==opwt2)
	{
		if(isRightAssociative(s))
			return false;
		return true;
	}
	return opwt1 < opwt2 ? true : false;
}

int main()
{
	string exp;
	cin>>exp;
	stack<char> st;
	for(int i=0;i<exp.size();++i)
	{
		if(isalpha(exp[i]) || isdigit(exp[i]))
			cout<<exp[i];
		
		else if(isOpenParentheses(exp[i]))
			st.push(exp[i]);
		
		else if(isCloseParentheses(exp[i]))
		{
			while(!isOpenParentheses(st.top()))
			{	
				cout<<st.top();
				st.pop();
			}
			st.pop();
		}
		else 
		{	
			if(st.empty())
				st.push(exp[i]);

			else if(hasHighPrecedence(st.top(),exp[i]))
			{
				st.push(exp[i]);
			}

			else
			{
				while(!hasHighPrecedence(st.top(),exp[i]))
				{
					cout<<st.top();
					st.pop();
				}
				st.push(exp[i]);
			}
		}

	}
	while(!st.empty())
	{
		cout<<st.top();
		st.pop();
	}	
}