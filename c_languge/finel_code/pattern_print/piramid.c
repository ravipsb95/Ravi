#include<stdio.h>
void main()
{	int n = 5;
	int m=0;
        for(int i=1; i<=n; i++)
        {
                for(int j=1; j<n-m; j++)
                {
                        printf(" ");
                }
		for(int k=1; k<=i*2-1; k++)
		{
			printf("*");
		}
		m++;
                printf("\n");
        }
}
