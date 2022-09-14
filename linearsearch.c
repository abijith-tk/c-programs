#include<stdio.h>
int main()
{
 int array[50],size,i,ele,flag=0;
 printf("Enter the size of the array: ");
 scanf("%d",&size);
 printf("Enter array elements:\n");
 for(i=0;i<size;i++)
 {
  scanf("%d",&array[i]);
 }
 printf("Enter the element to search: ");
 scanf("%d",&ele);
 for(i=0;i<size;i++)
 {
  if(ele==array[i])
  {
   printf("%d found at array[%d]\n",ele,i);
   flag=1;
   break;
  }
 }
 if(flag==0)
 {
  printf("Element not found\n");
 } 
}
