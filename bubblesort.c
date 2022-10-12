#include<stdio.h>
int main()
{
 int array[20];
 int size,temp;
 printf("Enter the size of the array : ");
 scanf("%d",&size);
 printf("Enter array elements\n");
 for(int i=0;i<size;i++)
 {
  scanf("%d",&array[i]);
 }
 
 // sorting the array
 for(int i=0;i<size;i++)
 {
  for(int j=i+1;j<size;j++)
  {
   if(array[i]>array[j])
   {
    temp=array[j];
    array[j]=array[i];
    array[i]=temp;
   }
  }
 }
 
 // printing the sorted array
 printf("\nThe sorted array is\n");
 for(int i=0;i<size;i++)
 {
  printf("%d\t",array[i]);
 }
 return 0;
}
