bool search(int* nums, int numsSize, int target){
    int start, end, mid;
    start = 0; end = numsSize - 1;
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (nums[mid] == target) return true;
        if (nums[start] == nums[mid]) {
            start ++;
        } else if (nums[start] < nums[mid]) { // first half are sorted
            if (target  >  nums[mid] || target < nums[start]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        } else { // second half are sorted
            if (target < nums[mid] || target > nums[end]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
    }
    return false;
}