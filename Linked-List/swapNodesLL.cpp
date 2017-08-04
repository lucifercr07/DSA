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

void insert(struct node** head, int data)
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

node* findPrevNode(node* temp, int x)
{
	node* prev=NULL;
	while(temp->data!=x)
	{
		prev=temp;
		temp=temp->next;
	}
	return prev;
}

void swapNodes(struct node** head, int x, int y)
{
	if(*head == NULL)
		return;
	if(x==y)
		return;
	node* prevX=NULL,*currX=*head;
	while(currX->data!=x)
	{
		prevX=currX;
		currX=currX->next;
	}

	node* prevY=NULL,*currY=*head;
	while(currY->data!=y)
	{
		prevY=currY;
		currY=currY->next;
	}

	if(prevX!=NULL)
		prevX->next=currY;
	else
		*head=currY;

	if(prevY!=NULL)
		prevY->next=currX;
	else
		*head=currX;

	node* temp=currX->next;
	currX->next=currY->next;
	currY->next=temp;
	return;
}

int nthNode(node *head, int num)
{
	int total=0;
	struct node* temp = head;
	while(temp!=NULL)
	{
		temp=temp->next;
		total++;
	}

	int nth = total-num;
	temp=head;
	for(int i=0;i<nth;++i)
	{
		temp=temp->next;
	}
	return temp->data;
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
	cout<<"Enter data of nodes who are to be swapped: ";
	int x,y;
	cin>>x>>y;
	swapNodes(&head,x,y);
	display(head);
	cout<<endl;
	cout<<"Enter nth node from end LL: ";
	int num;
	cin>>num;
	cout<<nthNode(head,num)<<endl;

}