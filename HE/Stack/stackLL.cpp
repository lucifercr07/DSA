#include <iostream>
#include <limits.h>

using namespace std;

struct stack{
	int data;
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
    stack* root = NULL;
 
    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
 
    printf("%d popped from stack\n", pop(&root));
 
    printf("Top element is %d\n", peek(root));
 
    return 0;
}