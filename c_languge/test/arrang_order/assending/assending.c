#include<stdio.h>

void main()
{
	int arr[] = {2,4,6,8,9,0,1,3};
	int len = sizeof(arr)/sizeof(arr[0]);
	printf("Length of arr : %d\n",len);
	
	for(int i=0; i<len; i++)
	{
		printf("arr[%d]=%d ,",i,arr[i]);
		for(int j=i+1; j<len; j++)
		{
			if(arr[i]>arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		
	}
	printf("\n");
	for(int k=0;k<len;k++)
	{
		printf("arr[%d]=%d ,",k,arr[k]);
	}
	printf("\n");
}
