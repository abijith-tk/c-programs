#include<stdio.h>

// matrix addition 

int main()
{
 int matrix1[20][20],matrix2[20][20],sum[20][20];
 int row,col;
 printf("Enter the number of rows: ");
 scanf("%d",&row);
 printf("Enter the number of columns: ");
 scanf("%d",&col);
 
 // reading matrix elements
 
 printf("Enter matrix 1 elements\n");
 for(int i=0;i<row;i++)
 {
  for(int j=0;j<col;j++)
  {
   printf("matrix1[%d]=",i);
   scanf("%d",&matrix1[i][j]);
  }
 }
 printf("Enter matrix 2 elements\n");
 for(int i=0;i<row;i++)
 {
  for(int j=0;j<col;j++)
  {
   printf("matrix2[%d]=",i);
   scanf("%d",&matrix2[i][j]);
  }
 }
 
 // printing the matrix
 
 printf("Matrix 1\n");
 for(int i=0;i<row;i++)
 {
  for(int j=0;j<col;j++)
  {
   printf("%d\t",matrix1[i][j]);
  }
  printf("\n");
 }
 printf("Matrix 2\n");
 for(int i=0;i<row;i++)
 {
  for(int j=0;j<col;j++)
  {
   printf("%d\t",matrix2[i][j]);
  }
  printf("\n");
 }
 
 // performing addition
 
 printf("Sum of matrix\n");
 for(int i=0;i<row;i++)
 {
  for(int j=0;j<col;j++)
  {
   printf("%d\t",matrix1[i][j]+matrix2[i][j]);
  }
  printf("\n");
 }
 return 0;
}

