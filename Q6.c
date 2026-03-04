#include<stdio.h>
int missingelement(int *array,int range)
{
    int sum1=0,i,sum2=0;
    sum1=(range*(range+1))/2;
    for(i=0;i<range-1;i++)
    {
        sum2=sum2+array[i];
    }
    int element;
    element=sum1-sum2;
    return element;

}
int main()
{
    int range,i;
    printf("Enter the range:\n");
    scanf("%d",&range);
    int array[range-1];
    for(i=0;i<range-1;i++)
    {
        scanf("%d",&array[i]);
    }
    int element;
    element=missingelement(array,range);
     for(i=0;i<range-1;i++)
    {
        printf("%2d",array[i]);
    }
    printf("\n");
    printf("Missing element:%d",element);
}