Node* copyLeftRightNode(Node* treeNode, map<Node*,Node*> *m1)
{
    if(treeNode==NULL)
        return NULL;
    Node* clonedNode=newNode(treeNode->data);
    *(m1)[treeNode]=clonedNode;
    clonedNode->left=copyLeftRightNode(treeNode->left,m1);
    clonedNode->right=copyLeftRightNode(treeNode->right,m1);
    return clonedNode;
}

Node* copyRandom(Node* treeNode, Node* clonedNode, map<Node*, Node*> *m1)
{
	if(clonedNode==NULL)
		return NULL;
	clonedNode->random = (*m1)[treeNode->random];
	copyRandom(treeNode->left,clonedNode->left,m1);
	copyRandom(treeNode->right,clonedNode->right,m1);
}

Node* cloneTree(Node* tree)
{
    if(tree==NULL)
        return;
    map<Node*,Node*> m1;
    Node* newTree=copyLeftRightNode(tree,m1);
    copyRandom(tree,newTree,m1);
    return newTree;
}
