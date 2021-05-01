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
void push(Node** head1, int data1)
{
	Node* n=new Node();
	n->data=data1;
	n->next=(*head1);
	(*head1)=n;
}
//sorted List
void sorted(Node* n)
{
	Node* ptr;
	Node* cur= n;
	if( cur==NULL )
		return;
	while( cur->next!=NULL )
	{
		if( cur->data == (cur->next)->data )
		{
			ptr= cur->next->next;
			free(cur->next);
			cur->next=ptr;
		}
		else
			cur=cur->next;
	}
	return;
}
void sortedrecursive(Node* n)
{
	Node* ptr;
	if( n==NULL )
		return;
	if (n->next!=NULL )
	{
		if( n->data == (n->next)->data )
			{
				ptr= n->next;
				n->next = n->next->next;
				free(ptr);
				sortedrecursive(n);
			}
			else
			{
				sortedrecursive(n->next);
			}
	}
}
//unsorted list-hashing
void unsorted(Node* n)
{
	unordered_set <int> s;
	Node* curr;
	Node* prev;
	curr=n;
	while( curr != NULL )
	{
		if(s.find(curr->data) != s.end())
		{
			prev->next=curr->next;
			free(curr);
		}
		else
		{
			s.insert(curr->data);
			prev=curr;
		}
		curr=prev->next;
	}
}

int main()
{
	Node* head=NULL;
	push(&head, 20);  
    push(&head, 13);  
    push(&head, 13);  
    push(&head, 11);  
    push(&head, 11);  
    push(&head, 11); 
    printll(head);
    unsorted(head);
    printll(head);
}