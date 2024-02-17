void moveZeroes(int* nums, int numsSize) {
    int i, j;
    for (i = 0, j = 0; j < numsSize; j++) {
        if (nums[j] != 0) {
            nums[i++] = nums[j];
        }
    }
    memset(&nums[i], 0, (numsSize - i) * sizeof(int));  //setting a memory block 
}