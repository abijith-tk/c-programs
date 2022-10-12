#include<stdio.h>

/*
 binary search : performed only on sorted arrays.
 step 1: find the mid of the array
 step 2: check mid element is equal to the search item or not
 step 3: if step 2 is print element found at the position mid
 step 4: else check mid element is less than or greater than the search item
 step 5: if it is less than mid element neglect the right parts
 ......................................
*/
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
