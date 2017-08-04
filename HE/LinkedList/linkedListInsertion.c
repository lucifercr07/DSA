//To insert nodes in linked list

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
	int data;
	struct node* next;
};

struct node* newNode(int data)
{
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = data;
	new_node->next = NULL;
	return new_node;
}

void insertAtBegin(struct node** head, int data)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp=newNode(data);
	temp->next=*head;
	*head=temp;
}

void insertAfter(struct node** head, int n, int data)
{
	n--;
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp=newNode(data);
	struct node* node=*head;
	while(n!=0)
	{
		n--;
		node=node->next;
	}
	temp->next=node->next;
	node->next=temp;
}

void insertAtEnd(struct node** head, int data)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp=newNode(data);
	struct node* n = *head;
	while(n->next!=NULL)
	{
		n=n->next;
	}
	n->next=temp;
}

void display(struct node* node)
{
	while(node!=NULL)
	{
		printf("%d ",node->data);
		node=node->next;
	}
}

int main()
{
	int data,ch;
	struct node* head=NULL;
	do
	{	
		printf("\nEnter\n1.For Insertion at beginning of list\n2. For insertion after a given node\n");
		printf("3. Insertion at end of Linked List\n4. Press 9 to exit\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("\nEnter data for node: ");
			scanf("%d",&data);
			if(head==NULL)
			{
				head=newNode(data);
				display(head);
			}
			else
			{
				insertAtBegin(&head,data);
				display(head);
			}
		}
		else if(ch==2)
		{
			if(head==NULL)
			{
				printf("No node is inserted currently");
			}
			else
			{
				printf("\nEnter the node number after data to be inserted: ");
				int n;
				scanf("%d",&n);
				printf("\nEnter the data to be inserted: ");
				scanf("%d",&data);
				insertAfter(&head,n,data);
				display(head);
			}
		}
		else if(ch==3)
		{
			printf("\nEnter data for node: ");
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
	}while(ch!=9);
	
}

