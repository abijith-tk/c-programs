#include<stdio.h>

struct node{
 int value;
 struct node *next;
};
int main()
{
 int choice,ele,pos;
 printf("Linked list\n1.Insert at beginning\n2.Insert at end\n3.Insert at a position\n");
 printf("4.Delete from beginning\n5.Delete from end\n6.Delete from a position\n");
 printf("7.Display\nEnter your choice:");
 scanf("%d",&choice);
 int con=1
 while(con!=0)
 {
  switch(choice)
  {
   case 1 : printf("Enter the element:");
            scanf("%d",&ele);
            insert_beg(ele);
            break;
   case 2 : printf("Enter the element:");
	    scanf("%d",&ele);
            insert_end(ele);	
            break;
   case 3 : printf("Enter the element:");
            scanf("%d",&ele);
            printf("Enter the position:");
            scanf("%d",&pos);
            insert_pos(ele,pos);
            break;
   case 4 : delete_beg();
            break;
   case 5 : delete_end();
            break;
   case 6 : printf("Enter the position:");
            scanf("%d",&pos);
            delete_pos(pos);
            break;
   case 7 : dispaly();
            break;
   default: printf("Invalid choice");
  }
  printf("Enter 0 to exit: ");
  scanf("%d",&con);
 } 
 return 0;
}
