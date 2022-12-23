#include<stdio.h>
#define MAX 50
int stack[MAX];
int top=-1;
int push(int ele)
{
 top++;
 stack[top]=ele;
}

int pop()
{
 printf("%d",stack[top]);
 top--;
}


int main()
{
int decimal;
printf("Decimal to binary conversion\n");
printf("Enter the decimal value: ");
scanf("%d",&decimal);
while(decimal!=0)
{
int ele=decimal%2;
push(ele);
decimal=decimal/2;
}
while(top>-1)
{
pop();
}
return 0;
}
