#include<iostream>
using namespace std;

class node
{
	public:
		int key;
		node* pointer;
};

int main()
{
	node* f= new node;
	node* s= new node;
	node* t= new node;
	node* n=f;
	while(n!=NULL)
	{
		cin>>n->key;
		n=n->pointer;
	}
	f->pointer=s;
	s->pointer=t;
	t->pointer=NULL;
	
}
