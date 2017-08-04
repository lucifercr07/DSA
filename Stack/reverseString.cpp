//Reverse a string using stack
#include <iostream>
#include <limits.h>

using namespace std;

struct stack{
	char data;
	stack* next;
};

stack* newNode(int data)
{
	stack* st = new stack;
	st->data=data;
	st->next=NULL;
	return st;
}

int isEmpty(stack* root)
{
	return !root;
}

void push(stack** root, int data)
{
	stack* st=newNode(data);
	st->next=*root;
	*root=st;
}

int pop(stack** root)
{
	if(isEmpty(*root))
		return INT_MIN;
	
	stack* temp=*root;
	*root=temp->next;
	int pop=temp->data;
	free(temp);
	return pop;
}

int peek(stack* root)
{
	if(isEmpty(root))
		return INT_MIN;
	
	return root->data;
}

int main()
{
    
    cout<<"Enter the string: ";
    string s;
    cin>>s;

    stack* root = NULL;
	for(int i=0;i<s.size();++i) 
    	push(&root, s[i]);
 	
 	while(root)
    	printf("%c", pop(&root));
    cout<<'\n';
    
    return 0;
}