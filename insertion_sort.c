#include<stdio.h>
int main()
{
 int size,key,j;
 printf("Size=");
 scanf("%d",&size);
 int arr[size+1];
 printf("Enter array elements");
 for(int i=0;i<size;i++)
 {
         scanf("%d",&arr[i]);
 }
 for(int i=1;i<size;i++)
 {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
                arr[j+1]=arr[j];
                j=j-1;
        }
        arr[j+1]=key;
 }
 printf("After sorting");
 for(int i=0;i<size;i++)
 {
     printf("%d\t",arr[i]);
 }
 printf("\n");
 return 0;
}
