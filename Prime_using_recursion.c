#include<stdio.h>

int isprime(int ele,int i)
{
 if(ele<=1)
 {
  return 1;
 }
 else if(ele==2 || ele==3)
 {
  return 0;
 }
 else if(ele%i==0){
  return 1;
 }
 else if(i<=2){
  return 0;
 }
 else{
  isprime(ele,i-1);
 }
}
int main()
{
    int value,n2,res;
    printf("Enter number:");
    scanf("%d",&value);
    n2=value/2;
    res=isprime(value,n2);
    if(res==1)
    {
     printf("Not prime");
    }
    else{
     printf("Prime");
    }
    return 0;
}
