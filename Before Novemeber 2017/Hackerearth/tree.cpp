#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node 
{
	int data;
	struct node * left, *right;
};

int height(struct node *root);
void PrintGivenLevel(struct node *root,int height);
void PrintLevelOrder(struct node *root)
{
	int h=height(root);
	for(int i=h;i>=1;i--)
	{
		PrintGivenLevel(root,i);
		printf("\n");
	}
	
}

void PrintGivenLevel(struct node *root,int height)
{
	if(root==NULL)
	return;
	if(height==1)
	printf("%d ",root->data);

	PrintGivenLevel(root->left,height-1);
	PrintGivenLevel(root->right,height-1);
	
}

int height(struct node *root)
{

	if(root==NULL)
	return 0;
	int lheight=height(root->left);
	int rheight=height(root->right);
	
	if(lheight>rheight)
	{
		return (lheight+1);
		}	
	else
	return (rheight+1);
}

struct node *newNode(int data)
{
	struct node *root=(struct node *)malloc(sizeof(struct node));
	root->left=root->right=NULL;
	root->data=data;
	return root;
}

int main()
{
    struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);
    root->right->left  = newNode(7);
    root->right->right = newNode(6);
 
    printf("Level Order traversal of binary tree is \n");
    PrintLevelOrder(root);
 
    return 0;
}
