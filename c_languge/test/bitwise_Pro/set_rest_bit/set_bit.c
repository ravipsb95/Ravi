#include<stdio.h>

void main()
{
	int num = 5;
	num = num | (1<<1);
	printf("Set 2 position of bit : %d\n",num);
}
