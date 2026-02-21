int maxSubarraySumCircular(int* nums, int numsSize)
{
    int currentMax = nums[0], globalMax = nums[0];
    int currentMin = nums[0], globalMin = nums[0];
    int totalSum = nums[0];

    for(int i = 1; i < numsSize; i++)
    {
        // Kadane for maximum subarray
        currentMax = (nums[i] > currentMax + nums[i]) 
                        ? nums[i] 
                        : currentMax + nums[i];
        globalMax = (globalMax > currentMax) 
                        ? globalMax 
                        : currentMax;

        // Kadane for minimum subarray
        currentMin = (nums[i] < currentMin + nums[i]) 
                        ? nums[i] 
                        : currentMin + nums[i];
        globalMin = (globalMin < currentMin) 
                        ? globalMin 
                        : currentMin;

        totalSum += nums[i];
    }

    // If all numbers are negative
    if(globalMax < 0)
        return globalMax;

    // Return max of normal and circular case
    return (globalMax > totalSum - globalMin) 
            ? globalMax 
            : totalSum - globalMin;
}
