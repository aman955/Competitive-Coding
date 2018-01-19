#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *next;
};

void push(struct node ** head_ref, int data)
{
		struct node *new_node = (struct node*)malloc(sizeof( struct node));
		new_node->data = data;
		new_node->next = *head_ref;
		*head_ref=new_node;
		
}

void end(struct node ** head_ref, int data)
{
		struct node *new_node = (struct node*)malloc(sizeof( struct node));
		new_node->data = data;
		new_node->next = NULL;
		
		struct node *temp = *head_ref;
		
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=new_node;
		
}

int main()
{
	struct node *head = NULL;
	struct node *second = NULL;
	struct node *third = NULL;
	
	head = (struct node*)malloc(sizeof( struct node));

	second = (struct node*)malloc(sizeof( struct node));
	third = (struct node*)malloc(sizeof( struct node));
   
   	head->data=1;
	head->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=NULL;
	
   push(&head,0);
   end(&head,4);
   	struct node *temp = head;
	
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}

}
