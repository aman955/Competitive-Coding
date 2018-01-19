#include<iostream>
using namespace std;

struct node 
{
	int data;
	node *left,*right;
};

node * newnode(int data)
{
	node *root= new node();
	root->data=data;
	root->left=root->right=NULL;
	return root;
}

void insertnode(node *root,int a,int b,char c)
{
	if(root==NULL)
	return;
	if(root->data==a)
	{
		node *temp=newnode(b);
		if(c=='R')
		root->right=temp;
		else
		root->left=temp;
		return;
	}
	else
	{
		insertnode(root->left,a,b,c);
		insertnode(root->right,a,b,c);
	}
}

void mirrortree(node *root1,int a,int b,char c)
{
	if(root1==NULL)
	return;
	if(root1->data==a)
	{
		node *temp=newnode(b);
		if(c=='L')
		root1->right=temp;
		else
		root1->left=temp;
		return;
	}
	else
	{
		mirrortree(root1->right,a,b,c);
		mirrortree(root1->left,a,b,c);
	}
}

int check(node *root,node *root1,int a)
{
	
	if(root==NULL)
	return 0;

	
	if(root->data==a && root1==NULL)
	return -1;

	if(root1==NULL)
	return 0;
	
	if(root->data==a)
	{
		return root1->data;
	}
	

		if(check(root->left,root1->left,a))
			return check(root->left,root1->left,a);
		if(check(root->right,root1->right,a))
	        return check(root->right,root1->right,a);
	
	return 0;
}

void preorder(node *root)
{
	if(root==NULL)
	return ;
	cout<<root->data<<" ";
	
	
	preorder(root->left);
	preorder(root->right);
}

int main()
{
	node *root = newnode(1);
	node *root1 = newnode(1);
	int n,q,a,b;
	cin>>n>>q;
	char c;
	for(int i=0;i<n-1;i++)
	{
		cin>>a>>b>>c;
		insertnode(root,a,b,c);
		mirrortree(root1,a,b,c);
	}

	while(q--)
	{
		cin>>a;
		b=check(root,root1,a);
		cout<<b<<endl;
	}
}
