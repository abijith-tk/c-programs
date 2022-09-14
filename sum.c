#include<stdio.h>

// read two numbers and return their product if it is less than 1000 else their sum

int main()
{
 int num1,num2,sum,product;
 printf("Num1=");
 scanf("%d",&num1);
 printf("Num2=");
 scanf("%d",&num2);
 product=num1*num2;
 if(product<=1000)
 {
  printf("Product=%d",product);
 }
 else 
 {
  sum=num1+num2;
  printf("Sum=%d",sum);
 }
 return 0;
}
