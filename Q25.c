#include<stdio.h>
#include<stdlib.h>
/*
Print matrix boundary only

Rotate matrix 90 degrees

Zigzag traversal

Anti-spiral order

Generate spiral matrix (fill numbers)*/
void output(int row,int col,int array[row][col])
{
    int i,k;
    for(i=0;i<row;i++)
    {
        for(k=0;k<col;k++)
        {
            printf(" %2d",array[i][k]);
        }
        printf("\n");
    }
}
void input(int row,int col,int array[row][col])
{
    int i,k;
    for(i=0;i<row;i++)
    {
        for(k=0;k<col;k++)
        {
            scanf(" %d",&array[i][k]);
        }
    }
}
int main()
{
    int i,row,col;
    printf("Enter the number of rows and columns in matric:\n");
    scanf("%d %d",&row,&col);
    int matrix[row][col];
    printf("Enter the elements in matrix:\n");
    input(row,col,matrix);
    int top=0,bottom=row-1,left=0,right=col-1;
    while(top<=bottom && left<=right)
    {
        for(i=left;i<=right;i++)
        {
            printf("%2d ",matrix[top][i]);
        }
        top++;
        for(i=top;i<=bottom;i++)
        {
         printf("%2d ",matrix[i][right]);   
        }
        right--;
        if(top<=bottom)
        {
        for(i=right;i>=left;i--)
         {
         printf("%2d ",matrix[bottom][i]);     
         }
        bottom--;
        }
        if(left<=right)
        {
        for(i=bottom;i>=top;i--)
          {
            printf("%2d ",matrix[i][left]);

          }
          left++;
        }
    }
    return 0;

}