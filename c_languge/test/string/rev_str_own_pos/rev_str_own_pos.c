#include<stdio.h>
#include<string.h>

void swap(char *start,char *end)
{	
	while(start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
	
}
void rev_str(char *str)
{
	char *start = str;
	char *end = str;
	while(*end != '\0')
	{
		end++;
		if(*end == ' ' || *end == '\0')
		{
			swap(start,end-1);
			start = end+1;
	
		}
	}
}
/*
 *
*/
void main()
{	char arr[50] = "Ravi Pratap Singh";
	int len = strlen(arr);
	rev_str(arr);
	//swap(arr,arr+(len-1));
	printf("%s\n",arr);
}
