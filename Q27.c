#include<stdio.h>
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
    int i,k,row,col;
    printf("Enter the number of rows and columns in matric:\n");
    scanf("%d %d",&row,&col);
    int matrix[row][col];
    printf("Enter the elements in matrix:\n");
    input(row,col,matrix);
    if(row!=col)
    {
        printf("Not an Identity Matrix.\n");
        return 0;
    }
    for(i=0;i<row;i++)
    {
        for(k=0;k<col;k++)
        {
            if(i==k)
            {
                if(matrix[i][k]!=1)
                {
                    printf("Not an identity matrix.\n");
                    return 0;
                }
            }
            else if(i!=k)
            {
                if(matrix[i][k]!=0)
                {
                   printf("Not an identity matrix.\n");
                    return 0; 
                }
            }
        }
    }
    printf("Identity matrix.\n");
    return 0;
}