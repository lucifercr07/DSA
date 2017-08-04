//Program to merge two sorted Linked list
#include <bits/stdc++.h>

using namespace std;

struct node{
	int data;
	node* next;
};

node* SortedMerge(node* a, node* b)
{
	node* result=NULL;
	if(!a)
		return b;
	else if(!b)
		return a;

	if(a->data<=b->data)
	{
		result=a;
		result->next=SortedMerge(a->next,b);
	}
	else
	{
		result=b;
		result->next=SortedMerge(a,b->next);
	}	
	return result;
}

void push(struct node** head_ref, int new_data)
{
    /* allocate node */
    struct node* new_node =
        (struct node*) malloc(sizeof(struct node));
 
    /* put in the data  */
    new_node->data  = new_data;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref)    = new_node;
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
    /* Start with the empty list */
    struct node* res = NULL;
    struct node* a = NULL;
    struct node* b = NULL;
 
    /* Let us create two sorted linked lists to test
      the functions
       Created lists, a: 5->10->15,  b: 2->3->20 */
    push(&a, 15);
    push(&a, 10);
    push(&a, 5);
 
    push(&b, 20);
    push(&b, 3);
    push(&b, 2);
 	display(a);
 	cout<<endl;
 	display(b);
 	cout<<endl;
    /* Remove duplicates from linked list */
    res = SortedMerge(a, b);
 
    printf("Merged Linked List is: \n");
    display(res);
 
    return 0;
}