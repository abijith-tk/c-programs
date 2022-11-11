#include<stdio.h>

// implementation of circular queue using array

int main()
{
 int c_q[20],choice,ele;
 int size,front=-1,rear=-1;
 printf("Enter the size of the queue : ")
 scanf("%d",&size);
 int con=1
 while(con!=0)
 {
  printf("\n1.Enqueue\n2.Dequeue\n3.Display\nEnter your choice:");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:if((front>rear)||(front==0 && rear==size)
   	  {
   	   printf("Queue overflow");
   	  }
   	  else{
   	   printf("Enter the element to insert : ");
   	   scanf("%d",&ele);
   	  }
   	  break;
   case 2:if(front==-1)
          {
           printf("\nQueue underflow\n");
          }
          else{
           front=(front+1)%size; 
          }
   	  break;
   	  
   case 3:if(front==-1)
          {
           printf("Queue underflow");
          }
          else{
   	   for(int i=front;i<=rear;i=(i+1)%size)
   	   {
   	    printf("%d",c_q[i]);
   	   }
   	  }
   	  break;
   default:printf("Invalid choice");
  }
 }
 return 0;
}
