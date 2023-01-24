#include<stdio.h>
#include<stdlib.h>
#include"list.h"


void main(void)
{
	printf("Enter the number of nodes want to creat : ");
	scanf("%d",&count);
	
	creat_list(&count);
	printf("Created list\n");
	display(head);
	insert_at(89,1);
	printf("Add at begening list\n");
	display(head);
	insert_at(37,tevers());
	printf("Add at end list\n");
	display(head);
        insert_at(2953,3);
        printf("add at 3rd pos \n");
        display(head);
	
}
