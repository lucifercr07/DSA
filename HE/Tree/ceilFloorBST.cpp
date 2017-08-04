//Floor and Ceil from a BST
#include <bits/stdc++.h>

using namespace std;


struct Node
{
    int data;
    Node *left, *right;
};

void inorder(Node* root)
{
	if(root==NULL)
		return;

	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

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

int ceilBST(Node* root, int data)
{
	if(root==NULL)
		return -1;

	if(root->data==data)
		return root->data;

	if(root->data < data)
		return ceilBST(root->right, data);

	int ceil=ceilBST(root->left,data);
	if(ceil==-1)
		return root->data;
	else
		return ceil;
}

int floorBST(Node* root, int data)
{
	if(root==NULL)
		return -1;

	if(root->data==data)
		return root->data;

	if(root->data > data)
		return floorBST(root->left,data);

	int floor=floorBST(root->right,data);
	if(floor==-1)
		return root->data;
	else
		return floor;
}

int main()
{
    Node *root = newNode(8);
 
    root->left = newNode(4);
    root->right = newNode(12);
 
    root->left->left = newNode(2);
    root->left->right = newNode(6);
 
    root->right->left = newNode(10);
    root->right->right = newNode(14);
 
    inorder(root);
    cout<<endl;
    
    cout<<"Ceiling of data: "<<endl;
    for(int i = 0; i < 16; i++)
        printf("%d  %d\n", i, ceilBST(root, i));

    cout<<"Floor of data: "<<endl;
    for(int i = 0; i < 16; i++)
        printf("%d  %d\n", i, floorBST(root, i));
 
    return 0;
}