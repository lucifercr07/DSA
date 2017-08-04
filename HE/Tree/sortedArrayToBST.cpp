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

Node* createBST(int start,int end, int *arr)
{
    if(start>end)
        return NULL;
    int mid=floor((start+end)/2);

    Node* root = newNode(arr[mid]);
    
    root->left = createBST(start,mid-1,arr);
    root->right = createBST(mid+1,end,arr);
    return root;
}

void preOrder(Node* root)
{
    if(root==NULL)
        return;
        
    cout<<root->key<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int *arr=(int*)malloc(sizeof(int)*n);
        for(int i=0;i<n;++i)
            cin>>arr[i];
             
        Node* root=createBST(0,n-1,arr);
        preOrder(root);
        cout<<en
    }
    return 0;
}