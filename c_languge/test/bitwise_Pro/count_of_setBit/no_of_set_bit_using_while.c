#include<stdio.h>

void main()
{
	int num = 5;
	int count =0;
	while(num)
	{
		if(num%2)
			count++;
		num = num/2;
	}
	printf(" count = %d ",count);
}
