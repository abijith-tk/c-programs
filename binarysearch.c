#include<stdio.h>
int main()
{
 int array[20],size,ele,start,end,mid,flag=0;
 printf("Enter the size of the array : ");
 scanf("%d",&size);
 printf("Enter array elements\n");
 for(int i=0;i<size;i++)
 {
  scanf("%d",&array[i]);
 }
 printf("\nEnter the element to search : ");
 scanf("%d",&ele);
 start=0;
 end=size-1;
 while(start<=end)
 {
  mid=(start+end)/2;
  if(array[mid]==ele)
  {
   printf("%d found at array[%d]\n",ele,mid);
   flag=1;
   break;
  }
  else if(array[mid]<ele)
  {
   start=mid+1;
  }
  else{
   end=mid-1;
  }
 }
 if(flag!=1)
 {
  printf("Element not found\n");
 }
 return 0;
}
