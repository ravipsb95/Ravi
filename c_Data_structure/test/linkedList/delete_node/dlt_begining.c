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
        if(head ==  NULL)
        {
                printf("there is no list \n");
        }
        else
        {
                temp = head;
		head = head->next;
		free(temp);
        }
}

