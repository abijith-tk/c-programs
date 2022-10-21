#include<stdio.h>

// Implementation of double ended queue using arrays
// In deque iinsertion and deletion can be performed on the both ends

int main()
{
 int dequeue[20];
 int size,ele,front=-1,rear=-1,choice,con=1;
 printf("Enter the size of the queue : ");
 scanf("%d",&size);
 while(con!=0)
 {
  printf("\n1.Insert at front\n2.Insert at rear\n3.Delete from front\n4.Delete from rear\nEnter your choice : ");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1 : if(front==-1 && rear==-1)
            {
             front++;
             rear++;
             printf("Enter the element to insert : ");
             scanf("%d",&ele);
             dequeue[front]=ele;
             printf("After insertion\n");
             printf("%d",dequeue[0]); 
            }
            else if(front<=rear && rear < size-1 ) 
            {
             for(int i=rear;i>=front;i--)
             {
              dequeue[i+1]=dequeue[i];
             }
             rear++;
             printf("Enter the element to insert : ");
             scanf("%d",&ele);
             dequeue[front]=ele;
             printf("\nAfter insertion\n");
             for(int i=front;i<=rear;i++)
             {
              printf("%d\t",dequeue[i]);
             }
            }
            else{
             printf("Queue is full\n");
            }
            break;
   case 2 : if(front<=rear && rear<size-1)
            {
             if(rear == -1 && front == -1)
             { 
              front = rear = 0;
             }
             else{
             rear++;
             }
             printf("Enter the element to insert : ");
             scanf("%d",&ele);
             dequeue[rear]=ele;
             printf("\nAfter insertion\n");
             for(int i=front;i<=rear;i++)
             {
              printf("%d\t",dequeue[i]);
             }
            }
            else{
             printf("\nQueue is full\n");
            }
            break;
   case 3 : if(front<rear)
            {
             front++;
   	     printf("\nAfter deletion\n");
   	     for(int i=front;i<=rear;i++)
   	     {
   	      printf("%d\t",dequeue[i]);
   	     }
   	    }
   	    else{
   	     printf("\nQueue is empty\n");
   	    }
            break;
   case 4 : if(rear>-1 && rear<size)
   	    {
   	     rear--;
   	     printf("\nAfter deletion\n");
   	     for(int i=front;i<=rear;i++)
   	     {
   	      printf("%d\t",dequeue[i]);
   	     }
   	    }
   	    else{
             printf("\nQueue is empty\n");  	    
   	    }
            break;
   default:printf("Invalid choice\n");
  }
  printf("\nEnter 0 to exit - > ");
  scanf("%d",&con);
 }
 return 0;
}
