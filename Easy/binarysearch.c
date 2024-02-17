int binarysearch(int *nums, int low, int high, int target) {
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (nums[mid] == target)
        return mid;
    else if (target > nums[mid]) 
        return binarysearch(nums, mid + 1, high, target);
    return binarysearch(nums, low, mid - 1, target);
}

int search(int* nums, int numsSize, int target) {
    return binarysearch(nums, 0, numsSize - 1, target);
}