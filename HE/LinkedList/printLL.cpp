//Display linked list forward and backward recursively

#include <bits/stdc++.h>

using namespace std;

struct node{
	int data;
	struct node* next;
};

node* newNode(int data)
{
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = data;
	new_node->next = NULL;
	return new_node;
}

void insert(node** head, int data)
{
	if(*head==NULL)
	{
		*head=newNode(data);
		return;
	}
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp=newNode(data);
	struct node* n = *head;
	while(n->next!=NULL)
	{
		n=n->next;
	}
	n->next=temp;
}


void displayReverse(node* head)
{
	node* temp=head;
	if(temp==NULL)
		return;
	
	displayReverse(temp->next);
	cout<<temp->data<<" ";
}

void display(node* head)
{
	node* temp= head;
	if(temp!=NULL)
	{
		cout<<temp->data<<" ";
		display(temp->next);
	}
	else
		return;
}

int main()
{
	node* head=NULL;
	insert(&head,1);
	insert(&head,2);
	insert(&head,3);
	insert(&head,4);
	insert(&head,5);
	insert(&head,6);
	insert(&head,7);
	cout<<"Displaying list forwards: ";
	display(head);
	cout<<endl;
	cout<<"Displaying list backwards: ";
	displayReverse(head);
	cout<<endl;
}