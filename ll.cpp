//Linked list
#include<iostream>
using namespace std;

class node
{
	public:
	int key;
	node* next;
	node* previous;
	
};

void print(node* n)
{
	while(n!=NULL)
	{
	
	cout<<n->key<<" ";
	n=n->previous;
}
}
node* pushback(node* n)
{
	node* fourth = new node();
	n->next = fourth;
	fourth->key = 8;
	fourth->previous = n;
	fourth->next= NULL;
	return fourth;
}
int main()
{
	node* first = new node();
	node* second = new node();
	node* third = new node();
	
	first->key=3;
	second->key=6;
	third->key=7;
	
	first->next=second;
	second->next=third;
	third->next = NULL;
	
	first->previous=NULL;
	second->previous=first;
	third->previous=second;
	
	print(third);
	fourth=pushback(third);
	
	print(fourth);
}
