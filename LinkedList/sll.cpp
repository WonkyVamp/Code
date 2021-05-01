#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
	int data;
	Node* next;
};
//print elements
void printll(Node* n)
{
	while( n!=NULL)
	{
		cout << n->data << endl;
		n=n->next;
	}
}
//insert elements
void insertFront(Node** n, int data1)
{
	Node* new_node=new Node();
	new_node->data=data1;
	new_node->next=(*n);
	(*n) = new_node;
}
void insertBetween(Node** n, int data1)
{
	Node* new_node=new Node();
	new_node->data=data1;
	if( *n==NULL )
	{
		*n=new_node;
		return;
	}
	new_node->next=(*n)->next;
	(*n)->next=new_node;
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
//delete
void deleteelement( Node** n, int data1)
{
	Node* temp=(*n);
	Node* prev=NULL;
	if( temp!=NULL && temp->data==data1 )
	{
		*n=temp->next;
		free(temp);
		return;
	}
	while( temp->data !=data1 && temp !=NULL )
	{
		prev=temp;
		temp=temp->next;
	}
	if( temp == NULL )
		return;
	prev->next=temp->next;
	free(temp);
}
void deleteposition( Node** n, int pos )
{
	int i=0;
	Node* temp=*n;
	Node* prev=NULL;
	if( pos == 0 )
	{
		*n=temp->next;
		free(temp);
		return;
	}
	while( temp!=NULL && i<pos-1 )
	{
		//prev=temp;
		temp=temp->next;
		i++;
	}
	if( temp == NULL || temp->next==NULL )
		return;
	prev=temp->next->next;
	free(temp->next);
	temp->next=prev;
}
//count nodes
int countnodes( Node* n)
{
	if( n== NULL)
		return 0;
	return 1+countnodes(n->next);
}
// search key )
bool search( Node* n, int key)
{
	if( n== NULL )
		return false;
	if( n->data== key)
		return true;
	return search(n->next, key);
}
// Get Nth node
void nthnode( Node* n, int key , int c)
{
	if( n == NULL )
		return;
	for( int i=0; i<c; i++ )
	{
		if(n->data == key ) 
		{
			cout << i << endl;
			return;
		}
		n=n->next;
	}
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
		insertBetween(&head,ele );
	}
	int c=countnodes(head);
	cout << c << endl;
	bool m = search( head, 5 );
	cout << m << endl;
	nthnode( head, 30 , c);
	printll(head);
}