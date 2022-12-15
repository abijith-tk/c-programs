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
  printf("%d",k);
 }
 else{
  printf("Not a factorial");
 }
}

//int main(int argc, char *argv[])
int main()
{
 //isfact(atoi(argv[1]));
 isfact(120);
 return 0;
}
/*

n=120,i=2

120/2=60   n/i
           n=n/i  , i++
60/3=20

20/4=5

5/5=1

7/2=3
3/3=1

24/2--12/3--4/4

*/
