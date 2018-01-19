#include<iostream>
#include<queue>
using namespace std;

struct node
{
	int data;
	struct node *left,*right;
};

node * newNode(int data)
{
	node *temp =new node;
	temp->data=data;
	temp->left=temp->right=NULL;
	return temp;
} 

void printLevelOrder(node *root)
{
	if(root==NULL)
	return;
	
	queue<node *> q;
	q.push(root);
	int t=0;
	while(1)
	{
		if(root==NULL)
		return;
		
		int nodecount=q.size();
		t^=1;
		if(nodecount==0)
		break;
		while(nodecount>0)
		{
			node *temp=q.front();
			cout<<temp->data<<" ";
			q.pop();
			if(t==1)
			{
			if(temp->left!=NULL)
			q.push(temp->left);
			if(temp->right!=NULL)
			q.push(temp->right);
			nodecount--;
		     }
		     else
		     {
		     	if(temp->right!=NULL)
			q.push(temp->right);
			if(temp->left!=NULL)
			q.push(temp->left);
			nodecount--;
			 }
		}
		cout<<endl;
		
	}	
	
}

int main()
{
    node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);
    root->right->left  = newNode(6);
    root->right->right = newNode(7);
 
    printf("Level Order traversal of binary tree is \n");
    printLevelOrder(root);
 
    return 0;
}
