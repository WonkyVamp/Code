#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
	int data;
	Node* next;
};
void push(Node** n, int data1)
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
void printll(Node* n)
{
	while( n!=NULL)
	{
		cout << n->data << endl;
		n=n->next;
	}
}
bool palindrome( Node* n )
{
	stack <int> s;
	Node* p1= n;
	int ctr=0;
	while( p1 != NULL )
	{
		s.push( p1->data );
		p1=p1->next;
	}
	//Node* p2= n;
	while( n != NULL )
	{
		int i= s.top();
		//cout << i << endl; 
		s.pop();
		if( n->data == i )
		{
			n=n->next;
		}
		else
			return false;
	}
	return true;
}
int main()
{
	Node* head=NULL;
	push(&head, 10);
	push(&head, 5); 
    push(&head, 5); 
    push(&head, 10); 
    //printll(head);
    bool k=palindrome(head);
    cout << k;
}