#include <bits/stdc++.h>

using namespace std;


struct Node
{
    int key;
    Node *left, *right;
};

void inorder(Node* root)
{
	if(root==NULL)
		return;

	inorder(root->left);
	cout<<root->key<<" ";
	inorder(root->right);
}

Node* newNode(int key)
{
	Node* temp = (Node*)malloc(sizeof(struct Node));
	temp->key=key;
	temp->left = temp->right = NULL;

	return temp;
}

Node* insert(Node* p, int key)
{
	if(p==NULL)
		return newNode(key);

	if(p->key>key)
		p->left = insert(p->left,key);

	else if(p->key<key)
		p->right = insert(p->right,key);

	return p;
}

Node* inorderSuccessor(Node* p)
{
	if(p==NULL)
		return NULL;

	while(p->left!=NULL)
		p=p->left;

	return p;
}

Node* inorderpredecessor(Node* p)
{
	Node* curr=p;
	if(!curr)
		return NULL;

	while(curr->right!=NULL)
		curr=curr->right;

	return curr;
}

Node* deleteNode(Node* p, int data)
{
	if(p==NULL)
		return NULL;

	if(data<p->key)
		p->left = deleteNode(p->left,data);

	else if(data>p->key)
		p->right = deleteNode(p->right,data);

	else
	{
		if(!p->left)
		{
			Node* temp = p->right;
			free(p);
			return temp;
		}

		else if(!p->right)
		{
			Node* temp = p->left;
			free(p);
			return temp;
		}

		Node* temp = inorderpredecessor(p->left);
		p->key = temp->key;
		p->left = deleteNode(p->left,temp->key);
	}

	return p;
}

int main()
{
    struct Node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
  
    inorder(root);
  	
    root=deleteNode(root,20);
    cout<<endl;
    inorder(root);
    cout<<endl;
	root=deleteNode(root,50);    

	inorder(root);
    return 0;
}