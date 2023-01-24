#include<stdio.h>
#include<stdlib.h>

struct node {
        int data;
        struct node *next;
};

struct node *head = NULL;
struct node *newNode = NULL;
struct node *temp = NULL;
struct node *prv = NULL;
	int pos = 0;

void main()
{      
        if(head ==  NULL)
        {
                printf("There is no list \n");
        }
        else
        {
		temp = head;
		while(int i<pov)
		{
			prv = temp;
			temp = temp->next;
			i++;
		}
		prv->next = temp->next
		free(temp);
		
        }
}

