#include <stdio.h>
#include<stdlib.h>
typedef struct node 
{
    int data;
    struct node *next;
}node; // now we can use "node" insted of "struct node"
       // also we change the name "node"

node *head = NULL;
node *newnode = NULL;
node *temp = NULL;

void creat_list(int *count)
{
    while(*count)
    {
        node *newnode = (struct node*) malloc(sizeof(struct node));
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
            		head->data = *count;
            		head->next = 0;
        	}
        	else
        	{
            		temp->next = newnode;
            		temp = temp->next;
            		temp->data = *count;
            		temp->next = 0;
        	}	
       		(*count)--;
	}	
    }
    
}
void display(node *head,int *count)
{
    temp = head;
    while(temp!=0)
    {
        printf("node : %d , data : %d\n",++(*count),temp->data);
        temp = temp->next;
    }
}

int main(void)
{
    // Here your code !
    int count=3;// number of nodes
    //creat nodes
    creat_list(&count);
    //display all nodes
    display(head,&count);
        

}

