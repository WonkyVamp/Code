#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
	int data;
	Node* next;
};
void push(Node** head1, int data1)
{
	Node* n=new Node();
	n->data=data1;
	n->next=(*head1);
	*head1=n;
}
void detectloop( Node* head1 )
{
	Node* one = head1; 
	Node* two = head1;
	while ( one && two && one->next )
	{
		one=one->next;
		two=two->next->next;
		if ( one == two )
		{
			cout << "Found";
			// return;
			Node* ptr= one;
			int ctr=1;
			while( one->next!=ptr )
			{
				ctr++;
				one=one->next;
			}
			cout << ctr << endl;
			return;
		}
	}
	cout << "No loop" << endl;
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
int main()
{
	Node* head=NULL;
	push(&head, 10);
	push(&head, 20); 
    push(&head, 4); 
    push(&head, 15); 
    head->next->next->next->next = head; 
    detectloop(head); 
}