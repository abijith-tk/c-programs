#include <stdio.h>

int main()
{
  int array[50];
  int size,pos,ele,temp;
  printf("Enter the size of the array:");
  scanf("%d",&size);
  printf("Enter the array elements\n");
  for(int i=0;i<size;i++)
  {
    printf("array[%d]=",i);
    scanf("%d",&array[i]);
  }
  printf("Enter the element to be added and its position");
  scanf("%d%d",&ele,&pos);
  if(pos>=0||pos<size)
  {
    for(int i=pos;i<size;i++)
    {
      temp=array[pos];
      array[pos]=ele;
      array[pos+1]=temp;
    }
  }
  printf("The array after insertion ");
  for(int i=0;i<size;i++)
  {
    printf("%d\t",array[i]);
  }
  return 0;
}