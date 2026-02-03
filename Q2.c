#include<stdio.h>
int main()
{
    int i,range,temp1,temp2,k,target;
    scanf("%d",&range);
    if(range<2 || range>10000)
    {
        printf("Invalid Input");
        return 0;
    }
    int array[range];
    for(i=0;i<range;i++)
    {
        scanf("%d",&array[i]);
    }
    scanf("%d",&target);
    int flag=1;
    for(i=0;i<range&&flag!=0;i++)
    {
        for(k=i+1;k<range;k++)
        {
            if(array[i]+array[k]==target)
            {
                temp1=i;
                temp2=k;
                flag--;
                break;
            }
        }
        
    }
    printf("[%d,%d]",temp1,temp2);
    return 0;
}
/*#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloc'ed, assume caller calls free().
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *result = (int*)malloc(2 * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

*/