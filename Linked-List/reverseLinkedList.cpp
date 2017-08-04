//Reverse a linked list using iterative solution

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

void reverse(node** head)
{
	node* prev=NULL;
	node* curr=*head;
	node* next=curr->next;
	while(curr!=NULL)
	{
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	*head=prev;
	return;

}

void display(node* head)
{
	if(head==NULL)
	{
		cout<<"LL empty"<<endl;
		return;
	}

	node* node = head;
	while(node!=NULL)
	{
		cout<<node->data<<" ";
		node=node->next;
	}
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
	display(head);
	cout<<endl;
	reverse(&head);
	cout<<"Reversed Linked List: ";
	display(head);
	cout<<endl;
}	