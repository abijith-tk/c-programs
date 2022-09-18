#include<stdio.h>
#include<math.h>
// program to solve polynomial equations
int main()
{
  int a,b,c;
  float x1,x2;
  printf("a=");
  scanf("%d",&a);
  printf("b=");
  scanf("%d",&b);
  printf("c=");
  scanf("%d",&c);
  
  // x1=(-b+sqrt(b^2-4*a*c))/2*a
  // x2=(-b-sqrt(b^2-4*a*c))/2*a
  int d=b*b-4*a*c;
  if(d==0)
  {
   x1=-b/(2*a);
   x2=x1;
  }
  else{
   x1=(-b+sqrt(d))/(2*a);
   x2=(-b-sqrt(d))/(2*a);
  }
  printf("x1=%lf\n",x1);
  printf("x2=%lf",x2);
  return 0;
}
