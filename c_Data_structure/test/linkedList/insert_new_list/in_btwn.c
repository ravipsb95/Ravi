#include<stdio.h>
#include<stdlib.h>

struct node {
        int data;
        struct node *next;
};

struct node *head = NULL;
struct node *newNode = NULL;
struct node *temp = NULL;
	int pos = 0; // at which posison want to add the node
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
       
                temp = head;
                while(int i < pos)
                {
                        temp = temp->next;
			i++;
                }
		newNode->next = temp->next;
		temp-next = newNode;
        }
}

