#include<stdio.h>
#include<stdlib.h>

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

