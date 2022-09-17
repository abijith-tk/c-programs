#include <stdio.h>

int main()
{
    int array[50];
    int size,pos,ele,temp;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("Enter the array elements\n");
    for(int i=0; i<size; i++)
    {
        printf("array[%d]=",i);
        scanf("%d",&array[i]);
    }
    printf("The array is\n");
    for(int i=0; i<size; i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
    printf("Enter the element to be added:");
    scanf("%d",&ele);
    printf("Enter the position:");
    scanf("%d",&pos);
    if(pos>=0||pos<size)
    {
        for(int i=size-1; i>pos; i--)
        {
            array[i]=array[i-1];
        }
        array[pos]=ele;
    }
    printf("The array after insertion\n");
    for(int i=0; i<size; i++)
    {
        printf("%d\t",array[i]);
    }
    return 0;
}    