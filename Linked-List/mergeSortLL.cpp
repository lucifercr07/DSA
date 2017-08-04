//Merge Sort a linked list

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

void splitList(node* head, node** a, node** b)
{
	if(head==NULL || head->next==NULL)
	{
		*a=head;
		*b=NULL;
	}

	else
	{
		node* fast=head->next;
		node* slow=head;

		while(fast!=NULL)
		{
			fast=fast->next;
			if(fast!=NULL)
			{
				slow=slow->next;
				fast=fast->next;
			}			
		}

		*a=head;
		*b=slow->next;
		slow->next=NULL; //Two different linked list made and now we will follow the procedure followed 
							//for merging two sorted linked list	
	}
}

node* merge(struct node* a, struct node* b)
{
	if(!a)
		return b;
	if(!b)
		return a;

	node* result=NULL;
	if(a->data<=b->data)
	{
		result=a;
		result->next=merge(a->next,b);
	}

	if(a->data>b->data)
	{
		result=b;
		result->next=merge(a,b->next);
	}

	return result;
}

void mergeSort(struct node** head)
{
	node* src = *head;
	if(src==NULL || src->next==NULL)
		return;

	node* a;
	node* b;

	splitList(src,&a,&b); //Just like partition

	mergeSort(&a);
	mergeSort(&b);

	*head=merge(a,b);
}

int main()
{
	node* head=NULL;
	insert(&head,5);
	insert(&head,2);
	insert(&head,4);
	insert(&head,1);
	insert(&head,6);
	insert(&head,3);
	insert(&head,7);
	cout<<"Original Linked List: ";
	display(head);
	cout<<endl;
	cout<<"Sorted Linked List: ";
	mergeSort(&head);
	display(head);
	cout<<endl;

}