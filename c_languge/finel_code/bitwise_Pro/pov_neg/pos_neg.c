#include<stdio.h>

void main()
{
	int num =0;
	printf("Enter any number =  ");
	scanf("%d",&num);
	int sign = (num>0) - (num<0);
	if(sign == 1)
		printf("positive number\n");
	else if(sign == -1)
		printf("negetive number\n");
	else
		printf("number is zero\n");
}
