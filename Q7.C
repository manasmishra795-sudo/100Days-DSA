#include<stdio.h>
int main()
{
    int i,k,range,temp;
    printf("Enter the range of the array:\n");
    scanf("%d",&range);
    int array[range];
    printf("Enter values in array:\n");
    for(i=0;i<range;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Array before reversing:\n");
    for(i=0;i<range;i++)
    {
        printf("%3d",array[i]);
    }
    printf("\n");
    i=0;k=range-1;
    while (k>i)
    {
        temp=array[i];
        array[i]=array[k];
        array[k]=temp;
        i++;
        k--;
    }
    printf("Array after reversing:\n");
    for(i=0;i<range;i++)
    {
        printf("%3d",array[i]);
    }
    printf("\n");
    

}