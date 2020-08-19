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

int main()
{
	node* first = new node();
	node* second = new node();
	node* third = new node();
	
	first->key;
	second->key=6;
	third->key=7;
	
	first->next=second;
	second->next=third;
	third->next = NULL;
	
	node* n = first;
	while(n!= NULL)
	{
		cin>>n->key;
		n=n->next;
	}
	first->previous=NULL;
	second->previous=first;
	third->previous=second;
	print(third);
}
