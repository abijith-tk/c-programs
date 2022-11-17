#include<stdio.h>

int main()

{

        int size;

        printf("Size=");

        scanf("%d",&size);

        int arr[size];

        printf("Enter array elements :");

        for(int i=0;i<size;i++)

        {

                scanf("%d",&arr[i]);

        }
        // Beginning of sorting 
        for(int i=0;i<size;i++)

        {

                for(int j=0;j<size-1;j++)

                {
                        // Comparing adjacent elements 
                        if(arr[j]>arr[j+1])

                        {

                                int temp;

                                temp=arr[j];

                                arr[j]=arr[j+1];

                                arr[j+1]=temp;

                        }

                }

        }

        printf("Sorted array\n");

        for(int i=0;i<size;i++)

        {

                printf("%d\t",arr[i]);

        }

        return 0;

}
