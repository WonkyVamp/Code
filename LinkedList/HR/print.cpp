#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
	int data;
	Node* next;
};
void printll(Node* n)
{
	while( n!=NULL)
	{
		cout << n->data << endl;
		n=n->next;
	}
}
void insertEnd(Node** n, int data1)
{
	Node* new_node=new Node();
	new_node->data=data1;
	new_node->next=NULL;
	Node* last=(*n);
	if( *n==NULL )
	{
		*n=new_node;
		return;
	}
	while( last->next!=NULL)
	{
		last=last->next;
	}
	last->next=new_node;
	return;
}
int main()
{
	Node* head=NULL;
	int n;
	cin >> n;
	for ( int i=0; i<n; i++ )
	{
		int ele;
		cin >> ele;
		insertEnd(&head,ele );
	}
	printll(head);
}