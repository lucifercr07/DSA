//Rotate a linked list by k

void rotateLL(struct node** head, int k)
{
	node* temp=head;
	for(int i=1;i<k&&temp!=NULL;++i) 
		temp=temp->next;

	node* node=*head;
	while(node!=NULL)
		node=node->next;

	node->next=*head;
	*head=temp->next;
	temp->next=NULL;
}