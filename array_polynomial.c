#include<stdio.h>

// implementing polynomal using arrays

int main()
{
 int order,x,power;
 printf("Enter the highest order");
 scanf("%d",&order);
 power=order;
 int polynomial[order];
 printf("Enter coefficients");
 for(int i=0;i<=order;i++)
 {
  scanf("%d",&polynomial[order]);
 }
 printf("The polynomial is");
 for(int i=0;i<=order;i++)
 {
  if(power<0)
  {
   break;
  }
  if(polynomial[i]>0 & i!=0)
  {
   printf("+");
  }
  else if(polynomial[i]<0)
  {
   printf("-");
  }
  else
   printf(" ");
  printf("%dx^%d",polynomial[i],power);
  power--;
 }
 return 0;
}
