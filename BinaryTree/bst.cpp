#include <bits/stdc++.h>
using namespace std;
struct node 
{
	int data;
	struct node *left, *right;
};
struct node *newnode(int value)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=value;
	temp->left=temp->right=NULL;
	return temp;
}
struct node *insert1( struct node *root, int value)
{
	if( root == NULL )
	{
		return newnode(value);
	}
	if( value < root->data )
	{
		root->left= insert1( root->left, value);
	}
	else if( value >= root->data )
	{
		root->right= insert1( root->right, value );
	}
	return root;
}
int main()
{
	struct node *root=NULL;
	root=insert1(root,5);
	root=insert1(root,10);
	root=insert1(root,6);
	root=insert1(root,3);
	return 0;
}