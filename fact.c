#include<stdio.h>
#include<stdlib.h>
int isfact(int n)
{
 int i=2;
 int k=1;             
 while(n!=1 && n%i==0)
 {
  n=n/i;
  k++;              
  i++;
 }
 if(n==1)
 {
  printf("%d",k);       // k!=n
 }
 else{
  printf("Not a factorial");
 }
}

//int main(int argc, char *argv[])   // command line argument
int main()
{
 //isfact(atoi(argv[1]));           // command line argument
 isfact(120);
 return 0;
}
/*
rough work.......
n=120,i=2             k=1
120/2=60   n/i ,      k=2
60/3=20    (n/i)/i++, k=3
20/4=5                k=4
5/5=1                 k=5

7/2=3
3/3=1

n=24,k=1
24/2--12/3--4/4
k=2--k=3--k=4
*/
