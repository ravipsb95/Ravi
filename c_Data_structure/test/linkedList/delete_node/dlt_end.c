#include<stdio.h>
#include<stdlib.h>

struct node {
        int data;
        struct node *next;
};

struct node *head = NULL;
struct node *newNode = NULL;
struct node *temp = NULL;
struct node *pre = NULL;

void main()
{      
        if(head ==  NULL)
        {
                printf("there is no list \n");
        }
        else
        {	temp = head;
		while(temp->next !=0)
		{
			pre = temp;
			temp = temp->next;
		}
                prv->next = 0;
                free(temp);
        }
}

