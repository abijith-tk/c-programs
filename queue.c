#include<stdio.h>

// implementation of queue using arrays

int main()
{
 int queue[100];
 int size,front,rear=-1,ele,choice;
 front=rear;
 printf("Enter the size of the queue:");
 scanf("%d",&size);
 int con=1;
 while(con==1)
 {
  printf("\n1.Insert\n2.Delete\nEnter your choice : ");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1: if(rear<size-1)
          {
           rear=rear+1;
           if(front==-1)
           {
            front=rear;
           }
           printf("Enter the element to be inserted: ");
           scanf("%d",&ele);
           queue[rear]=ele;
           printf("\nQueue after insertion\n");
           for(int i=front;i<=rear;i++)
           {
            printf("%d\t",queue[i]);
           }
          }
          else{
           printf("\nQueue is full\n");
          }
       break;
   case 2:if(front<rear)
  	 {
          front=front+1;
          printf("\nQueue after deletion\n");
          for(int i=front;i<=rear;i++)
          {
           printf("%d\t",queue[i]);
          }
         }
         else{
          printf("\nQueue is empty\n");
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
