#include<stdio.h>
#include<stdlib.h>

//creating the node for the linked list
struct node{
 int value;
 struct node *next;
}*temp=NULL,*current=NULL,*head=NULL;

// insert at the beginning of the list
void insert_beg(int ele)
{
 temp=(struct node *)malloc(sizeof(struct node));
 if(head==NULL)
 {
  head=temp;
  temp->next=NULL;
  temp->value=ele;
 }
 else{
  temp->value=ele;
  temp->next=head;
  head=temp;
 }
}

//insert at the end list
void insert_end(int ele)
{
 temp=(struct node *)malloc(sizeof(struct node));
 temp->value=ele;
 temp->next=NULL;
 if(head==NULL)
 {
  current=head=temp;
 }
 else{
  current->next=NULL;
  current=current->next;
 }
}

//delete from beginning of the list
void delete_beg()
{
 if(head==NULL)
 {
  printf("\nLinked list is empty\n");
 }
 else{
  head=head->next;
 }
}

//delete from end of the list
void delete_end()
{
 struct node *curr;
 if(head==NULL)
 {
  printf("\nLinked list is empty\n");
 }
 else{
  for(curr=head;curr->next!=NULL;curr=curr->next)
  curr->next=NULL;
 }
}

//display
void display()
{
 struct node *curr;
 temp=head;
 if(head==NULL)
 {
  printf("Linked list is empty");
 }
 else{
  for(curr=head;curr!=NULL;curr=curr->next)
  {
   printf("%d->",curr->value);
   if(curr->next==NULL)
   {
    printf("NULL");
   }
  }
 } 
}

int main()
{
 int choice,ele;
 int con=1;
 while(con!=0)
 {
   printf("linked list operations");
   printf("\n1.Insert at beginning\n2.Insert at end\n3.Delete from beginning\n4.Delete from   end\n5.Display\n");
  printf("\nEnter your choice : ");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:printf("Enter the element : ");
   	  scanf("%d",&ele);
   	  insert_beg(ele);
   	  break;
   case 2:printf("Enter the element : ");
   	  scanf("%d",&ele);
   	  insert_end(ele);
   	  break;
   case 3:delete_beg();
          break;
   case 4:delete_end();
   	  break;
   case 5:display();
          break;
   default: printf("Invalid choice\n");
  }
  printf("\nEnter 0 to exit: ");
  scanf("%d",&con);
 } 
 return 0;
}
