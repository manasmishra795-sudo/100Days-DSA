#include<stdio.h>
int main()
{
    int i,range,target;
    printf("Enter the range:\n");
    scanf("%d",&range);
    int array[range];
    for(i=0;i<range;i++)
    {
        scanf("%d",&array[i]);   
    }
    printf("Enter the element to be searched for:\n");
    scanf("%d",&target);
    int flag=0;
    for(i=0;i<range;i++)
    {
        if(array[i]==target)
        {
            flag++;
            break;
        } 
    }
    if(flag==1)
    {
        printf("Element found at %d",i);
    }
    else
    {
        printf("No element found");
    }
    return 0;

}