#include<stdio.h>

int main()
{
    int matrix1[20][20],matrix2[20][20];
    int row1,row2,col1,col2;
    printf("Matrix 1\n");
    printf("Row 1:");
    scanf("%d",&row1);
    printf("Col 1:");
    scanf("%d",&col1);
    printf("\nMatrix 2\n");
    printf("Row 2:");
    scanf("%d",&row2);
    printf("Col 2:");
    scanf("%d",&col2);
    
// Matrix multiplication is possible only if 
// number of columns in Matrix 1 and number
// of rows in Matrix 2 are equal 

    if(col1==row2) 
    {
        int res[row1][col2];
        printf("Enter Matrix 1 elements\n");
        for(int i=0;i<row1;i++)
        {
          for(int j=0;j<col1;j++)
          {
            printf("matrix1[%d][%d]=",i,j);
            scanf("%d",&matrix1[i][j]);
          }
        }
        printf("\nEnter Matrix 2 elements\n");
        for(int i=0;i<row2;i++)
        {
          for(int j=0;j<col2;j++)
          {
            printf("matrix2[%d][%d]=",i,j);
            scanf("%d",&matrix2[i][j]);
          }
        }
        printf("Matrix 1 is \n");
        for(int i=0;i<row1;i++)
        {
          for(int j=0;j<col1;j++)
          {
            printf("%d\t",matrix1[i][j]);
          }
          printf("\n");
        }
        printf("Matrix 2 is \n");
        for(int i=0;i<row2;i++)
        {
          for(int j=0;j<col2;j++)
          {
            printf("%d\t",matrix2[i][j]);
          }
          printf("\n");
        }   
      }
    else{
           printf("Matrix multiplication not possible ");
         }
    return 0;
}