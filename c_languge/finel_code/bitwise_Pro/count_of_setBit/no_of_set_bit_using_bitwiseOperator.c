#include<stdio.h>


void main()
{
        int num = 256;
	int count = 0;
	while(num)
	{
		if(num & 1)
			count++;
		num = num >> 1;
	}
	printf("count = %d \n",count);
}

