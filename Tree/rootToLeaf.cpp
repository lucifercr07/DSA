//Print path from leaves to node, Count leaves and print path to a given node.
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

int countLeaves(Node* root)
{
	int sum=0;
	if(!root)
		return 0;

	if(!root->left && !root->right)
		return 1;

	sum+=countLeaves(root->left);
	sum+=countLeaves(root->right);

	return sum;
}

void printArray(int *arr, int index)
{
	for(int i=0;i<index;++i)
		cout<<arr[i]<<" ";
	cout<<endl;
}

void printPathUtil(Node* root,  int *storePath, int index)
{
	if(!root)
		return;

	storePath[index++]=root->data;

	if(!root->left && !root->right)
		printArray(storePath,index);

	else
	{	
		printPathUtil(root->left,storePath,index);
		printPathUtil(root->right,storePath,index);
	}
}

void printPath(Node* root)
{
	int storePath[100];
	printPathUtil(root,storePath,0);
}

bool printToGivenNode(Node* root, int node)
{
	if(!root)
		return false;

	if(root->data==node)
		return true;

	if(printToGivenNode(root->left,node)||printToGivenNode(root->right,node))
	{
		cout<<root->data<<" ";
		return true;
	}
	return false;
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
	int sum=0;
  	
  	cout<<"Number of Leaves: "<<countLeaves(root)<<endl;
  	printPath(root);
  	cout<<"Print Path to given node: ";
  	int node;
  	cin>>node;
  	bool t=printToGivenNode(root,node);

}
