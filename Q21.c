#include<stdio.h>
int main()
{
    int column,row,i,k;
    printf("Enter the number of rows and columns:\n");
    scanf("%d %d",&row,&column);
    int array1[row][column],array2[row][column],array3[row][column];
    printf("Enter the elements in rach row for matrix A\n");
    for(i=0;i<row;i++)
    {
        for(k=0;k<column;k++)
        {
            scanf("%d",&array1[i][k]);
        }
    }
    printf("Enter the elements in rach row for matrix B\n");
    for(i=0;i<row;i++)
    {
        for(k=0;k<column;k++)
        {
            scanf("%d",&array2[i][k]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(k=0;k<column;k++)
        {
            array3[i][k]=array1[i][k]+array2[i][k];
        }
    }   
    printf("Matrix A:\n"); 
    for(i=0;i<row;i++)
    {
        for(k=0;k<column;k++)
        {
         printf("%2d ",array1[i][k]);
        }
        printf("\n");
    }
    printf("Matrix B:\n");
    for(i=0;i<row;i++)
    {
        for(k=0;k<column;k++)
        {
         printf("%2d ",array2[i][k]);
        }
        printf("\n");
    }
     printf("The sum of A and B is:\n");
    for(i=0;i<row;i++)
    {
        for(k=0;k<column;k++)
        {
         printf("%2d ",array3[i][k]);
        }
        printf("\n");
    }
    return 0;
}