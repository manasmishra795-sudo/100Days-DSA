#include<stdio.h>
void input1darray(int array[],int range)
{
    int i;
    printf("Enter the elements in the array:\n");
    for(i=0;i<range;i++)
    {
        scanf("%d",&array[i]);
    }
}
void print1darray(int array[],int range)
{
    int i;
    for(i=0;i<range;i++)
    {
        printf("%3d",array[i]);
    }
    printf("\n");
}
int main()
{
    int array[100],range,i,position;
    printf("Enter the range of the array:\n");
    scanf("%d",&range);
    if(range<=0 || range>100)
    {
        printf("Invalid value for range.");
        return 0;
    }
    input1darray(array,range);
    printf("Enter the position whose element you want to delete:\n");
    scanf("%d",&position);
    printf("Array before deletion:\n");
    print1darray(array,range);
    if (position<0||position>range)
    {
        printf("Deletion not possible.\n");
        return 0;
    }
    else
    {
        for(i=position;i<range-1;i++)
        array[i] = array[i+1];
    }
    range--;
   
    printf("Array after deletion:\n");
    print1darray(array,range);
    return 0;
}