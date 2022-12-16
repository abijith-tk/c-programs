#include<stdio.h>
#define MAX 50
int stack[MAX];   // creating stack 
int top=-1;

// Function to insert elements 
int push(int ele)
{
 if(top<MAX)
 {
  ++top;
  stack[top]=ele;
  for(int i=0;i<=top;i++)
  {
    printf("%d\t",stack[i]);
  }
  printf("\n");
 }
 else{
  printf("Overflow\n");
 }
}

//Function to remove element 
int pop()
{
 top--;
 if(top<0)
 {
  printf("Underflow\n");
 }
 else{
  for(int i=0;i<=top;i++)
  {
   printf("%d\t",stack[i]);
  }
 }
}

int main()
{
    int ele,choice,cont=1;
    while(cont!=0)
    {
     printf("\n1.Push\n2.Pop");
     printf("\nEnter your choice:");
     scanf("%d",&choice);
     switch(choice)
     {
      case 1 : printf("Enter the element:");
               scanf("%d",&ele);
               push(ele);
               break;
      case 2 : pop();
               break;
      default: printf("\nInvalid choice");
               break;
     }
     printf("Enter 0 to exit ");
     scanf("%d",&cont);
    }
    return 0;
}
