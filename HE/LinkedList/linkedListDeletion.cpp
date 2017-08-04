#include <bits/stdc++.h>

using namespace std;

struct node
{
	int data;
	struct node* next;
};

void deleteNode(struct node** head, int data)
{
	if(head==NULL)
	{
		cout<<"\nLinked list empty.\n";
		return;	
	}

	struct node* node = *head,*prev;
		
	if(node!=NULL && node->data == data)
	{
		*head = node->next;
		free(node);
		return;
	}
	while(node->data!=data)
	{
		node=node->next;
		prev=node;
	}
	if(node==NULL)return;
	else
	{
		prev->next=node->next;
		free(node);
		return;
	}
}

struct node* newNode(int data)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=NULL;
	return temp;
}

void insertAtBegin(struct node** head, int data)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp=newNode(data);
	temp->next=*head;
	*head=temp;
}

void deleteNodePos(struct  node** head, int pos)
{
	
	if(*head==NULL)
	{
		cout<<"\nLinked list empty.\n";
		return;
	}
	struct node* node = *head,*prev = *head;
	if(pos==0)
	{
		*head=node->next;
		free(node);
		return;
	}

	for(int i=0;i<pos;++i)
		node=node->next;
	for(int i=0;i<pos-1;++i)
		prev=prev->next;

	prev->next=node->next;
	free(node);

}

int getNthNode(struct node* head, int index)
{
	struct node* node=head;
    if(index==0)
    {
        return node->data;
    }
    for(int i=0;i<index-1;++i)
    	node=node->next;
    return node->data;
}

void display(struct node* node)
{
	if(node==NULL)
	{
		printf("\nNo nodes\n");
		return;
	}
	while(node!=NULL)
	{
		printf("%d ",node->data);
		node=node->next;
	}
}

int main()
{
	int ch;
	struct node* head = NULL;
	do
	{
		printf("\nEnter\n1. Insert at beginning");
		printf("\n2. For deleting given key\n3. For deleting given node at a position\n");
		printf("4. Find the data of nth node\nPress 9 to exit\n");
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
				insertAtBegin(&head,data);
				display(head);
			}
		}

		else if(ch==2)
		{
			printf("Enter key: ");
			int key;
			scanf("%d",&key);
			deleteNode(&head,data);
			display(head);
			
		}

		else if(ch==3)
		{
			printf("\nEnter position of node to be deleted: ");
			int pos;
			scanf("%d",&pos);
			pos--;
			deleteNodePos(&head,pos);
			display(head);
		}

		else if(ch==4)
		{
			printf("\nEnter node number of data to be found: ");
			int num;
			cin>>num;
			cout<<getNthNode(head,num)<<endl;
		}

	}while(ch!=9);
}