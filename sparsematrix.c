#include<stdio.h>

// program to check whether the given matrix is a sparse matrix or not
/* Sparse matrix:A matrix which has a greater number of zero values
   in comparison to the non-zero values
*/
int main()
{
   int matrix[10][10];
   int row,col,count=0;
   printf("Enter the rows in the matrix:");
   scanf("%d",&row);
   printf("Enter the columns in the matrix:");
   scanf("%d",&col);
   printf("Enter matrix elements\n");
   int k=0;
   int sparse[3][10];
   for(int i=0;i<row;i++)
   {
     for(int j=0;j<col;j++)
     {
       printf("matrix[%d][%d]=",i,j);
       scanf("%d",&matrix[i][j]);
       if(matrix[i][j]!=0)
       {
         count++;
         sparse[0][k]=i;
         sparse[1][k]=j;
         sparse[2][k]=matrix[i][j];
         k++;
       }
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
   
   // checking whther the matrix is sparse or not
   if(count<((row*col)/2))
   {
     printf("\nSparse matrix\n");
     // printing its sparse table
     printf("The sparse table is\n");
     /* sparse table representation
          row number
          column number
          value at that position
      */
     for(int i=0;i<3;i++)
     {
       for(int j=0;j<k;j++)
       {
         printf("%d\t",sparse[i][j]);
       }
       printf("\n");
     }
   }
   else
   {
     printf("Not sparse matrix");
   }
   return 0;
}
