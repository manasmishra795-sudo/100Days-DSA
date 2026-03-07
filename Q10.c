#include<stdio.h>
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) 
{
    int i=m-1; 
    int k=n-1;
    int l=m+n-1;

while(i>=0&& k>=0)
{
    if(nums1[i]>nums2[k])
    {
        nums1[l]=nums1[i];
        l--;
        i--;
    }
    else
    {
        nums1[l] = nums2[k];
        l--;
        k--;
    }
}

while (k>=0)
{
    nums1[l] = nums2[k];
    l--;
    k--;
}
}


/*int i=0 ,l=0;
    for(i=0;i<n;i++)
    {
        nums1[m+i]=nums2[i];
    }
    for(int i=1;i<m+n;i++)
    {
        int ley=*(nums1+i);
        int l=i-1;
        while(l>=0 && *(nums1+l)>ley)
        {
            nums1[l+1]=nums1[l];
            l--;
        }
        nums1[l+1]=ley;
    }*/