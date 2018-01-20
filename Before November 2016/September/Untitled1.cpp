#include<iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *link;
};
struct Node *top=NULL;

void push(int x)
{
	struct Node *temp=new node;
	temp->data=x;
	temp->link=top;
	top = temp;
	
}

void pop()
{
	struct Node *temp;
	if(top==NULL)return;
	temp=top;
	top=top->link;
	free(temp);
}
