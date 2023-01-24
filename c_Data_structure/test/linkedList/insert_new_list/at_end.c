#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *head = NULL;
struct node *newNode = NULL;
struct node *temp = NULL;

void main()
{
	newNode = (struct node*) malloc(sizeof(struct node));
	if(newNode ==  NULL)
	{
		printf("memory not allocated \n");
	}
	else
	{
		printf("enter a value")
		scanf("%d",&newNode->data);
		newNode->next = 0;
		temp = head;
		while(temp->next != 0)
		{
			temp = temp->next;
		}
		
		temp->next = newNode;
	}
}
