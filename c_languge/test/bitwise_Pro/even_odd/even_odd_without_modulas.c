#include<stdio.h>

void main()
{
	printf("Enter number\n");
	int num=0;
	scanf("%d",&num);
	if(num & 1)
	{
		printf("odd number\n");  // every odd number has first bit is set like 
					 // 1 is 01
					 // 3 is 11
					 // 5 is 101
					 // 7 is 111
					 // 9 is 1001
	}
	else
	{
		printf("even number\n");
	}
}
