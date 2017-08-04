//Detect and remove loop in linked list

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

void removeLoop(node* head, node* slow)
{
	node* ptr1=head;
	node* ptr2;
	while(1)
	{
		ptr2=slow;
		while(ptr2->next!=slow && ptr2->next!=ptr1)
			ptr2=ptr2->next;

		if(ptr2->next==ptr1)
			break;
		else
			ptr1=ptr1->next;
	}

	ptr2->next=NULL;
	display(head);
	cout<<endl;
}

void detectLoop(node* head)
{
	int flag=0;
	node* fast=head,*slow=head;
	while(slow && fast &&fast->next)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
		{	
			removeLoop(head,slow);
			flag=1;
		}
	}
	if(flag==0)
		cout<<"No loop was there"<<endl;
	else
		cout<<"Loop was there but removed"<<endl;
}

int main()
{

	struct node *head = newNode(50);
    head->next = newNode(20);
    head->next->next = newNode(15);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(10);
    /* Create a loop for testing */
    head->next->next->next->next->next = head->next->next;
 	detectLoop(head);

}