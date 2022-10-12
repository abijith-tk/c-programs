#include<stdio.h>

// linear search : searching begins from 0th index and searches 
// it seqenetially until the element is found or end of the array 

int main()
{
 int array[50],size,ele,flag=0;
 printf("Enter the size of the array: ");
 scanf("%d",&size);
 printf("Enter array elements:\n");
 for(int i=0;i<size;i++)
 {
  printf("array[%d]=",i);
  scanf("%d",&array[i]);
 }
 printf("Enter the element to search: ");
 scanf("%d",&ele);
 for(int i=0;i<size;i++)
 {
  if(array[i]==ele)
  {
   printf("%d found at array[%d]\n",ele,i);
   flag=1;
   break;
  }
 }
 
 // flag=0 ,if the elemet is not present in the arrays
 if(flag!=1)
 {
  printf("Element not found\n");
 } 
 return 0;
}
