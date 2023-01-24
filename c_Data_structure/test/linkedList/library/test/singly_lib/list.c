#include<stdio.h>
#include<stdlib.h>
#include"list.h"

Node *head = NULL;
Node *newnode = NULL;
Node *temp = NULL;
Node *nextNode = NULL;
Node *currentNode = NULL;
Node *preNode = NULL;
int count = 0;
//this function is to creat number of nodes user wants
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
// this function is to display all the nodes data
void display(Node *head)
{	
	count=0;
	temp = head;
    	while(temp!=0)
    	{
        	printf("node : %d , data : %d\n",++count,temp->data);
        	temp = temp->next;
    	}
}

// this function is used to insert new node at the position user wants

void insert_at(int newData, int place)
{
	//if place == 1 means at begning
	//if place == count (i.e number of nodes) means at end
	Node *newnode = (Node*) malloc(sizeof(Node));
	if(newnode == NULL)
	{
		printf("New Node not created \n");
	}
	else
	{	if(place == 1)
		{	
			temp = head;
			newnode->data = newData;
			newnode->next = temp;
			head = newnode;
		}
		else if(place == tevers())
		{
			temp = head;
			while(temp->next != 0)
			{
				temp = temp->next;
			}
			newnode->data = newData;
			newnode->next = 0;
			temp->next = newnode;	
		}
		else
		{//work need to be completed
			temp = head;
			
			count=1;
			while(count != place)
			{	
				preNode = temp;
				temp = temp->next;
				count++;
			}
			newnode->data = newData;
			newnode->next = temp;
			preNode->next = newnode;
		}
	}


}

int tevers()
{
	temp = head;
	count = 0;
	while(temp != 0)
	{	
		temp = temp->next;
		++count;//length of list i.e number of nodes
	}
	// printf("Number of nodes : %d\n",count);
	return count;
}
