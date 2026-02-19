#include<stdio.h>
int main()
{
    int i,range;
    printf("Enter the range of the array:\n");
    scanf("%d",&range);
    int array[range];
    printf("Enter the elements in array:\n");
    for(i=0;i<range;i++)
    {
        scanf("%d",&array[i]);
    }
    int min=array[0];
    int max=array[0];
    for(i=0;i<range;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
        if(array[i]<min)
        {
            min=array[i];
        }

    }
    printf("Maximum and Minimum elements in the array are:%d %d\n",max ,min);
}