//Reverse a Linked List in groups of given size

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

node* reverse(node* head, int k)
{
	node* current=head;
	node* prev=NULL;
	node* next=NULL;
	int count=0;

	while(current!=NULL && count<k)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
		count++;
	}

	if(next!=NULL)
		head->next=reverse(next,k);

	return prev;

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
	cout<<"Original Linked List: ";
	display(head);
	cout<<endl;
	cout<<"Enter size of groups: ";
	int k;
	cin>>k;
	head=reverse(head,k);
	display(head);
	cout<<endl;
}