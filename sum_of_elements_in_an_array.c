#include<stdio.h>

// sum of elemnets in an array

int main()
{
 int array[20];
 int size,sum,i;
 printf("Enter the size of the array: ");
 scanf("%d",&size);
 printf("Enter array elements\n");
 for(i=0;i<size;i++)
 {
  printf("array[%d]=",i);
  scanf("%d",&array[i]);
 }
 
 sum=0;
 for(i=0;i<size;i++)
 {
  sum=sum+array[i];
 }
 printf("Sum=%d\n",sum);
 return 0;
}
