void rotate(int* nums, int numsSize, int k) 
{
    int i;
    int temp[numsSize];
    k=k%numsSize;
    for(i=0;i<k;i++)
    {
        temp[i]=nums[numsSize-k+i];
    }
    for(i=k;i<numsSize;i++)
    {
        temp[i]=nums[i-k];
    }
    for(i=0;i<numsSize;i++)
    {
        nums[i]=temp[i];
    }
    
}