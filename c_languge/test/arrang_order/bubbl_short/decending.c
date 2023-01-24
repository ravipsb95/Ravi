#include<stdio.h>

void main()
{
        int arr[] = {2,4,6,8,9,0,1,3};
        int len = sizeof(arr)/sizeof(arr[0]);
        printf("Length of arr : %d\n",len);

        for(int i=0; i<len-1; i++)
        {
                printf("arr[%d]=%d ,",i,arr[i]);

                for(int j=0; j<len-1; j++)
                {
                        if(arr[j]<arr[j+1])
                        {
                                int temp = arr[j];
                                arr[j] = arr[j+1];
                                arr[j+1] = temp;
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

