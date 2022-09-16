#include<stdio.h>

// sparse matrix


// no output
int main()
{
 int matrix[20][20];
 int row,col;
 printf("Sparse matrix\n");
 printf("Enter the matrix size\n");
 scanf("%d",&row);
 scanf("%d",&col);
 // creating the matrix
 
 printf("Enter matrix elements\n");
 for(int i=0;i<row;i++)
 {
  for(int j=0;j<col;j++)
  {
   printf("matrix[%d][%d]=",i,j);
   scanf("%d",&matrix[i][j]); 
  }
 }
 
 // printing the matrix
 
 for(int i=0;i<row;i++)
 {
  for(int j=0;j<col;j++)
  {
   printf("%d\t",matrix[i][j]);
  }
  printf("\n");
 }

 int size=0;
 for(int i=0;i<row;i++)
 {
  for(int j=0;j,col;j++)
  {
   if(matrix[i][j]!=0)
   {
    size++;
   }
  }
 }
 
 // sparse matrix
 
 int table[3][size];
 int k=0;
 for(int i=0;i<row;i++)
 {
  for(int j=0;j<col;j++)
  {
   if(matrix[i][j]!=0)
   {
    table[0][k]=i;
    table[1][k]=j;
    table[2][k]=matrix[i][j];
    k++;
   }
  } 
 }
 
 for(int i=0;i<3;i++)
 {
  for(int j=0;j<size;j++)
  {
   printf("%d",table[i][j]);
  }
  printf("\n");
 }
 return 0;
}
