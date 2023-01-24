#include<stdio.h>

void main()
{
        int num = 7;
        num = num & ~(1<<1);
        printf("Reset 2 position of bit : %d\n",num);
}
