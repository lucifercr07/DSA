#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int key;
 
    Node* left;
    Node* right;
};

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

/*To print kth smallest number*/
void kthSmallest(Node* root, vector<int>& arr,int k)
{
	if(!root)
		return;

	Node* temp = root;

	kthSmallest(temp->left,arr,k);
	arr.push_back(root->key);
	kthSmallest(temp->right,arr,k);
}

/*To print k smallest number*/
void kSmallest(Node* root,int k)
{
	if(!root)
		return;

	stack<Node*> s;
	Node* temp=root;

	s.push(temp);

	while(temp->left!=NULL)
	{
		temp=temp->left;
			s.push(temp);
	}

	while(k!=0)
	{
		k--;
		Node* t = s.top();
		s.pop();
		cout<<t->key<<" ";

		if(t==root)
		{
			t=t->right;
			s.push(t);
			while(t->left!=NULL)
			{
				t=t->left;
				s.push(t);
			}
		}
		
		if(t->right)
			s.push(t->right);
	}
}

void inorder(Node* root)
{
	if(root==NULL)
		return;

	inorder(root->left);
	cout<<root->key<<" ";
	inorder(root->right);
}

int height(Node* root)
{
	if(!root)
		return 0;

	int lht = height(root->left);
	int rht = height(root->right);

	return max(lht,rht)+1;
}

int diameter(Node* root)
{
	if(!root)
		return 0;

	int lht=height(root->left);
	int rht=height(root->right);
	int ldiameter = diameter(root->left);
	int rdiameter = diameter(root->right);

	return max(1+lht+rht,max(ldiameter,rdiameter));
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
    cout<<endl;
    cout<<"Height of tree: "<<height(root)<<endl;
    cout<<"Diameter of tree: "<<diameter(root)<<endl;
    vector<int> vec;
    kthSmallest(root,vec,5);
    cout<<vec[4]<<endl;
    kSmallest(root,5);
}