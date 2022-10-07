#include<stdio.h>

// implemenation of stack using arrays

int main()
{
 int top=-1,size,ele,choice;
 int stack[100];
 printf("Enter the size of the queue:");
 scanf("%d",&size);
 int con=1;
 while(con==1)
 {
  printf("\n1.Insert\n2.Delete\nEnter your choice : ");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1: if(top<size-1)
          {
           top=top+1;
           printf("Enter the element to be inserted: ");
           scanf("%d",&ele);
           stack[top]=ele;
           printf("\nStack after push operation\n");
           for(int i=0;i<=top;i++)
           {
            printf("%d\t",stack[i]);
           }
          }
          else{
           printf("\nStack overflow\n");
          }
       break;
   case 2:if(top>-1 && top<size)
  	 {
          top=top-1;
          printf("Stack after pop operation\n");
          for(int i=0;i<=top;i++)
          {
           printf("%d\t",stack[i]);
          }
         }
         else{
          printf("\nStack underflow\n");
         }
       break;
   default:printf("\nInvalid choice\n");
  }
  printf("\nEnter 0 to exit or 1 to continue:");
  scanf("%d",&con);
  printf("\n"); 
 }
 return 0;
}
