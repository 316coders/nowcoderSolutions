
// 给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

// 你可以假设数组中无重复元素。

// 示例 1:

// 输入: [1,3,5,6], 5
// 输出: 2
// 示例 2:

// 输入: [1,3,5,6], 2
// 输出: 1
// 示例 3:

// 输入: [1,3,5,6], 7
// 输出: 4
// 示例 4:

// 输入: [1,3,5,6], 0
// 输出: 0

// 解题思路：二分变种题：题意为 找到第一个大于或等于 target 的位置

int searchInsert(int* nums, int numsSize, int target){

    if(nums==NULL || numsSize==0) return 0;

    // binary Search
    int l = 0, r = numsSize -1;
    int mid = 0;
    
    while(l<=r) {  
        mid = l + (r-l)/2;
        if(nums[mid]==target) return mid;  // 找到了
        else if(nums[mid] < target) l = mid + 1;
        else    r = mid - 1;
    }
    
    return l;

}