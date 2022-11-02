#include<stdio.h>

struct node{
 int data;
 struct node *next;
};
struct node *top=NULL;

void display(){
 struct node *temp;
 temp=top;
 if(temp==NULL){
  printf("Stack empty");
 }
 else{
  while(temp!=NULL){
   printf("%d\t",temp->data);
   temp=temp->next;
  }
 }
}
void push(int item){
 struct node *nptr=malloc(sizeof(struct node))
 nptr->data=item;
 nptr->next=top;
 top=nptr;
}
void pop(){
 if(top==NULL){
  printf("\nStack empty");
 }
 else{
  struct node *temp;
  temp=top;
  top=top->next;
  free(temp);
 }
}

int main()
{
 int choice,ele,con=1;
 printf("1.Insert\n2.Delete\n3.Display\nEnter your choice : ");
 scanf("%d",&choice);
 while(con!=0)
 {
  switch(choice)
  {
   case 1 :printf("Enter the element:");
          scanf("%d",&ele);
          push(ele);
          break;
   case 2 :pop();
  	  break;
   case 3 :display();
  	  break;
   default:printf("Invalid choice");
  }
  printf("Enter 0 to exit -->");
  scanf("%d",&con); 
 }
  return 0;
}
