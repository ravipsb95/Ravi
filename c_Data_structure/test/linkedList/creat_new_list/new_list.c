#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *new_node = NULL;
struct node *head = NULL;
struct node *temp = NULL;

void creat_node(int new_data);

void main()
{	
	int opt=1;
	int data = 0;
	int x=0;
	while(opt == 1)
	{
		printf("Enter data : ");
		scanf("%d",&data);
		creat_node(data);
		printf("want to stop ? press 0 and for continue press 1 \r\n");
		scanf("%d",&x);
		opt = x;
	}

	
}

void creat_node(int new_data)
{
        new_node = (struct node *) malloc(sizeof(struct node));
        static int count=0;
        if(new_node == NULL)
        {
                printf("Memory not allocated\n");
        }
        else
        {	
		printf("\nNew Node Created \n");
		if(head == 0)
		{	
			head = new_node;
			temp = new_node;
			
			head->data = new_data;
                	head->next = 0;
			printf("first Node created\t");
			printf("Head = %p \t",head);
			printf("new data = %d\n",new_data);
			count = 1;
		}
		else
		{
			count++;

			temp->next = new_node;
			temp = new_node;
			
			temp->data = new_data;
			temp->next = 0;
			printf("%dnd Node Created\t",count);
			printf("Temp add = %p \t",temp);
			printf("new data = %d \n",temp->data);

		}

        }
        
}

