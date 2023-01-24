#include<stdio.h>

void main()
{
	int data = 6;
	printf("Entered data is : %d\n",data);
	int count = 0;
	while(data)
	{
		if(data % 2!= 1)
		{
			count++;
			data = data/2;
		}
		else if(data %2 == 1)
		{	
			data &= ~(1<<count);
			printf("data = %d \n",data);
			break;
		}
	}
}
