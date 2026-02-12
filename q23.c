#include<stdio.h>
void print(int array[][100],int row,int column)
{
    int i,k;
    for(i=0;i<row;i++)
    {
        for(k=0;k<column;k++)
        {
            printf(" %2d",array[i][k]);
        }
        printf("\n");
    }
}
int symetric(int array[][100],int row, int column)
{
    int i,k;
    if(row!=column)
    return 0;
    
        for(i=0;i<row;i++)
        {
        for(k=0;k<column;k++)
        {
            if(array[i][k]!=array[k][i])
            return 0;
        }
        }
        return 1;
}
void input(int array[][100],int row,int column)
{
    int i,k;
    for(i=0;i<row;i++)
    {
        for(k=0;k<column;k++)
        {
            scanf(" %2d",&array[i][k]);
        }
    }
}

int main()
{
    int matrix[100][100],row,column;
    printf("Enter the values of row and column::\n");
    scanf("%d %d",&row,&column);
    if(row<=0||row>100||column<=0||column>100)
    {
    printf("Enter a value value.\n");
    return 0;
    }
    printf("Enter the values in the matrix:\n");
    input(matrix,row,column);
    printf("Matrix:\n");
    print(matrix,row,column);
    if(symetric(matrix,row,column)==1)
    {
        printf("The matrix is Symetric.\n");
    }
    else{
        printf("The matrix is not Symteric.\n");
    }
    return 0;
}