#include<stdio.h>
#define MAX 100

// reverse an array using stack --> reverse using pop operations

int stack[MAX];
int top=-1;
int push(int n)
{
 if(top<MAX)
 {
  top++;
  stack[top]=n;
 }
 else{
  printf("Overflow");
 }
}

int pop()
{
 if(top<=-1)
 {
  printf("Underflow");
 }
 else{
 int val=stack[top];
 top--;
 return val;
 }
}

int main()
{
 int size;
 printf("Size=");
 scanf("%d",&size);
 int array[size];
 for(int i=0;i<size;i++)
 {
  printf("array[%d]=",i);
  scanf("%d",&array[i]);
  push(array[i]);
 }
 for(int i=0;i<size;i++)
 {
  printf("%d\t",pop());  // print the elements
 }
 printf("\n");
 return 0;
}
