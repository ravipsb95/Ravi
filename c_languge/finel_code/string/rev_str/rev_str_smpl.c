#include<stdio.h>
#include<string.h>

void main()
{
	char arr[50] = "ravi pratap singh";
	int len = strlen(arr);
	printf("length of string  = %d \n",len);
	char temp;
	for(int i=0; i<len/2; i++)
	{
		temp = arr[i];
		arr[i] = arr[len -1-i];
		arr[len -1-i] = temp;
	}
	printf("%s\n",arr);
}
