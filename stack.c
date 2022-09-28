#include<stdio.h>

// implementaion of stack using arrays
int main()
{
 int size,element,choice;
 int stack[100],top=-1;
 printf("Enter the size of the stack:");
 scanf("%d",&size);
 int ch=1;
 while(ch!=0)
 { 
  printf("\nSTACK OPERATIONS\n1.push()\n2.pop()\n3.display()\nEnter your choice:");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1: printf("Enter the element to be inserted:");
          scanf("%d",&element);
          top++;
          if(top>=0&&top<size)
          {
           stack[top]=element;
           top++;
          }
          else{
           printf("Stack overflow\n");
          }
          break;
          
   case 2:if(top<0)
          {
           printf("Stack underflow");
          }
          else{
           printf("The last element is removed");
           top--;
          }
          break;
          
   case 3: if(top>=0)
          {
           printf("\nThe stack is\n");
           for(int i=0;i<top;i++)
           {
            printf("%d\t",stack[i]);
           }
          }
          else{
           printf("The stack is empty");
          }
          break;
   default:printf("Invalid choice");
 }
 printf("\nPress 0 to exit otherwise 1->");
 scanf("%d",&ch);
 }
 return 0;
}

