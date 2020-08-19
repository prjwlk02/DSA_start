//mirror_tree
#include<iostream>
using namespace std;
struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
};

struct Node* new_node(int data)
{
	struct Node* node = new (struct Node); 
	node->data = data;
	node->left = NULL;
	node->right = NULL;
}

void mirror(struct Node* node)
{
	if(node==NULL)
		return;
	
	mirror(node->left);
	mirror(node->right);
	
	struct Node* temp= node->left;
	node->left=node->right;
	node->right=temp;
	
}

void inorder(struct Node* node){
	if(node== NULL)
		return;
	else
		{
		inorder(node->left);
		cout<<node->data<<" ";
		inorder(node->right);
		}
}

int main()
{
	struct Node* root = new_node(1);
	root->left = new_node(2);
	root->right = new_node(5);
	root->right->right = new_node(7);
	root->right->left = new_node(8);
	inorder(root);
	cout<<endl;
	mirror(root);
	inorder(root);
}
