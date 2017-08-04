//Two of the nodes of a Binary Search Tree (BST) are swapped. Fix (or correct) the BST.

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int data)
{
    Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->left = temp->right = NULL;

    return temp;
}

Node* insert(Node* p, int data)
{
	if(p==NULL)
		return newNode(data);

	if(p->data>data)
		p->left = insert(p->left,data);

	else if(p->data<data)
		p->right = insert(p->right,data);

	return p;
}

void findPairs(Node* root, Node** first, Node** last, Node** prev)
{
	if(!root)
		return;
	findPairs(root->left,first,last,prev);

	if(*prev!=NULL && (*prev)->data > (root)->data)
	{
		if(*first==NULL)
			*first=*prev;
		*last=root;
	}
	*prev=root;

	findPairs(root->right,first,last,prev);
}

void correctBST(Node* root)
{
	Node* first=NULL,*last=NULL,*prev=NULL;
	findPairs(root,&first,&last,&prev);
	if(!first)
		return;
	swap(first->data,last->data);
}

void inorder(Node* root)
{
	if(root==NULL)
		return;

	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int main()
{
    struct Node *root = newNode(6);
    root->left        = newNode(3);
    root->right       = newNode(10);
    root->left->left  = newNode(1);
    root->left->right = newNode(2);
    root->right->right = newNode(12);
    root->right->left = newNode(7);
  
    inorder(root);
  	cout<<endl;

  	correctBST(root);

  	inorder(root);
  	cout<<endl;

    return 0;
}