#include<stdio.h>
#include<string.h>

void main()
{
        int num = 123456;
	int result = 0;
        while(num)
	{
		int rem = num % 10;
		result = rem + result*10;
		num = num / 10;
	}
        printf("%d\n",result);
}

