#include<stdio.h>
int main ()
{
    int array[100],i,range,insert,num;
    printf("Enter the range of the array:");
    scanf("%d",&range);
    if(range<=0|| range>100)
    {
        printf("Enter a valid value." );
    }
    printf("Enter the elemnts in the array:\n");
    for(i=0;i<range;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Array:\n");
    for(i=0;i<range;i++)
    {
        printf("%d",array[i]);
    }
    printf("\n");
    printf("Enter the position to insert the array:\n");
    scanf("%d",&insert);
    if(insert<0|| insert>range)
    {
        printf("INvalid position.\n");
        return 0;
    }
    printf("Enter the number to be inserted:\n");
    scanf("%d",&num);
    for(i=range;i>insert;i--)
    {
        array[i]=array[i-1];
    }
    array[insert]=num;
    range++;
    printf("Array after insertion:\n");
    for (int i = 0; i<range; i++) 
    {
        printf("%d ", array[i]);
    }

    

    return 0;
}