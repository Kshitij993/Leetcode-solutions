/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
 

Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums contains distinct values sorted in ascending order.
-104 <= target <= 104
*/

int searchInsert(int* nums, int numsSize, int target)
{
    int f,l,m;
    f=0;
    l=numsSize-1;
    if(target<=nums[0])
        return 0;
    else if(target==nums[numsSize-1])
        return numsSize-1;
    else if(target>nums[numsSize-1])
        return numsSize;
    while(f<=l)
    {
        m=(f+l)/2;
        if(nums[m]==target)
            return m;
        else if(nums[m]<target)
            f=m+1;
        else
            l=m-1;
    }
    if(nums[m]>target)
        return m;
    else
        return m+1;
}
