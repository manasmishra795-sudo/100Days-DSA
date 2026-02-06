#include<stdio.h>
int main()
{
    int i, range,k,l=0,count=0;
    printf("Enter the range of the array:\n");
    scanf("%d",&range);
    int array[range];
    printf("Enter the elements in array(sorted)\n");
    for(i=0;i<range;i++)
    {
        scanf("%d",&array[i]);
    }
    int array2[range];
    array2[l]=array[0];
    l++;
    printf("Array:\n");
    for(i=0;i<range;i++)
    {
        printf("%3d",array[i]);
    }
    for(i=1;i<range;i++)
    {
        if(array[i]!=array[i-1])
        {
            array2[l]=array[i];
            l++;
        }
       
    }
    printf("\n");
    printf("Array with unique elements:\n");
    for(i=0;i<l;i++)
    {
        printf("%3d", array2[i]);
    }
    return 0;

}