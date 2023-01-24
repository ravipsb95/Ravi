#include<stdio.h>
#include<stdlib.h>

void main()
{
	int row=3,col=3;
	int *ptr = (int*) calloc(row*col,sizeof(int));
	if(ptr == NULL)
	{
		printf("memorry not allocated \n");
	}
	else
	{
		printf("memory allocated  \n");	
		for(int i=0; i<row; i++)
		{
			for(int j=0; j<col; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
}

