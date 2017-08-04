#include <bits/stdc++.h>

using namespace std;

struct node
{
	int data;
	struct node* next;
};

node* newNode(int data)
{
	node* temp = (node*)malloc(sizeof(node));
	temp->data=data;
	temp->next=NULL;
	return temp;
}

void insertAtEnd(node** head, int data)
{
	node* temp=(node*)malloc(sizeof(node));
	temp=newNode(data);
	node* node=*head;
	if(node==NULL)
	{
		*head=temp;
		return;
	}

	while(node->next!=NULL)
	{
		node=node->next;
	}
	node->next=temp;
	return;
}

void display(struct node* node)
{
	while(node!=NULL)
	{
		printf("%d ",node->data);
		node=node->next;
	}
}

int countNode(node* head)
{
	if(head==NULL)
		return 0;
	else
		return 1 + countNode(head->next);
}

int main()
{
	node* head=NULL;
	int ch;
	do
	{
		printf("\nEnter\n1. Insert nodes at last");
		printf("\n2. For finding size of list\n");
		printf("Press 9 to exit\n");
		scanf("%d",&ch);
		int data;
		if(ch==1)
		{
			scanf("%d",&data);
			if(head==NULL)
			{
				head=newNode(data);
				display(head);
			}
			else
			{
				insertAtEnd(&head,data);
				display(head);
			}
		}

		else if(ch==2)
		{
			int count=countNode(head);
			cout<<"Number of nodes: "<<count<<endl;
		}

	}while(ch!=9);
}