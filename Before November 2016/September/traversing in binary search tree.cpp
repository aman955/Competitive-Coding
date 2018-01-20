#include<iostream>
#include<queue>
using namespace std;

struct node
{
	char data;
	node *left;
	node *right;
	
};

node *getnewnode(char data)
{
	node *newnode=new node();
	newnode->data=data;
	newnode->left=newnode->right=NULL;
	return newnode;
}

void levelorder(node *root)
{
	if(root==NULL)return;
	queue<node*> Q;
	Q.push(root);
	while(!Q.empty())
	{
		node *current = Q.front();
		cout<<current->data<<" ";
		if(current->left!=NULL)Q.push(current->left);
		if(current->right!=NULL)Q.push(current->right);
		Q.pop();
	}
	
	
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
	levelorder(root);
	
	
}
