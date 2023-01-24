#include<stdio.h>

void main()
{
	int num = 0;
	printf("Enter an number = ");
	scanf("%d",&num);
	int count=0,pov=-1;
	while(num)
	{
		if(num%2)
			count++;
		num = num/2;
		pov++;
	}
	if(count==1)
		printf("Number is 2^%d\n",pov);
	else
		printf("Not power of two\n");
}
