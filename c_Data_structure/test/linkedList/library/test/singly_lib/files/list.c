#include<stdio.h>
#include<stdlib.h>
#include"list.h"

Node *head = NULL;
Node *newnode = NULL;
Node *temp = NULL;
Node *nextNode = NULL;
Node *currentNode = NULL;
Node *preNode = NULL;

void creat_list(int *count)
{
	int inputData=0;   
	int n = 0;
       	while(*count)
    	{
        	Node *newnode = (Node*) malloc(sizeof(struct node));
		if(newnode == NULL)
		{
			printf("Memory not allocated\n");
		}
		else
		{
        		if(head==NULL)
        		{
            			head = newnode;
            			temp = head;
				printf("Enter the %dst Node data : ",++n);
				scanf("%d",&inputData);
				head->data = inputData;
            			head->next = 0;
        		}
        		else
        		{
            			temp->next = newnode;
            			temp = temp->next;
				printf("Enter the %dnd Node data : ",++n);
				scanf("%d",&inputData);
				temp->data = inputData;
            			temp->next = 0;
        		}
       			(*count)--;
		}
	}

}
void display(Node *head,int *count)
{
	temp = head;
    	while(temp!=0)
    	{
        	printf("node : %d , data : %d\n",++(*count),temp->data);
        	temp = temp->next;
    	}
}

