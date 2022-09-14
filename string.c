#include<stdio.h>
#include<string.h>
// accept a sring and print the elements at its even index

int main()
{
 char str[50];
 printf("Enter the string: ");
 scanf("%s",str);
 printf("The string is %s\n",str);
 int length=strlen(str);
 for(int i=0;i<length;i+=2)
 {
  printf("%c",str[i]);
 }
 return 0;
}
