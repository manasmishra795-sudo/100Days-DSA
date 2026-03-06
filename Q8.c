#include<stdio.h>
int removeElement(int* nums, int numsSize, int val) 
{ 
    int count=0;
    for(int i=0;i<numsSize;i++)
    { 
        if(*(nums+i)== val)
        {
            *(nums+i)=-1;
            count++;
        }

    }
    for(int i=1;i<numsSize;i++)
    {
        int key=*(nums+i);
        int k=i-1;
        while(k>=0 && *(nums+k)<key)
        {
            nums[k+1]=nums[k];
            k--;
        }
        nums[k+1]=key;
    }
    return numsSize-count;
    
    
}
int main()
{
    int numSize, val,O;
    printf("Enter the range of array:\n");
    scanf("%d",&numSize);
    int num[numSize];
    printf("Enter the array:\n");
    for(int i=0;i<numSize;i++)
    {
        scanf("%d",&num[i]);
    }
    

    printf("Enter the value to be removed:\n");
    scanf("%d",&val);
    O=removeElement(num,numSize,val);
    printf("Output:%d\n",O);
    int i;
    printf("\n");
    for(i=0;i<numSize;i++)
    {
        printf("%3d",num[i]);
    }
    

}
/*
int removeElement(int* nums, int numsSize, int val)
{
    int k = 0;  // index for valid elements

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != val)
        {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;  // number of remaining elements
}*/