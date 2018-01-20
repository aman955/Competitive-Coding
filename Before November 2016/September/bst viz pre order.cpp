#include<iostream>
using namespace std;

struct node
{
	char data;
	node *left;
	node *right;
};

void preorder(node *root)
{
	if(root==NULL)
	{
		return;
	}
	
	cout<<root->data;
	preorder(root->left);
	preorder(root->right);
}

void postorder(node *root)
{
	if(root==NULL)
	{
		return;
	}
	
	
	postorder(root->left);
	postorder(root->right);
	cout<<root->data;
}


void inorder(node *root)
{
	if(root==NULL)
	return;
	inorder(root->left);
	cout<<root->data;
	inorder(root->right);
}

int main()
{
	
	node *root=NULL,*temp,*head,*temp2,*temp3,*temp4;
	root=new node;
	head=root;
	root->data='A';
	temp=new node;
	temp2=new node;
	root->left=temp;
	temp->data='B';
	root=root->left;
	temp=new node;
	root->left=temp;
	temp->data='D';
	temp->left=NULL;
	temp->right=NULL;
	
	root=head;
	root=root->left;
	temp=new node;
	root->right=temp;
	temp->data='E';
	temp->right=NULL;
	temp->left=temp2;
	temp2->data='F';
	temp2->left=NULL;
	temp2->right=NULL;
	
	root=head;
	temp=new node;
	root->right=temp;
	temp->data='C';
	temp->left=NULL;
	root=temp;
	temp3=new node;
	root->right=temp3;
	temp3->data='G';
	temp3->left=NULL;
	temp4 = new node;
	temp3->right=temp4;
	temp4->data='H';
	temp4->right=NULL;
	temp4->left=NULL;
	root=head;
	preorder(root);
	cout<<endl;
	inorder(root);
	cout<<endl;
	postorder(root);
	
}
