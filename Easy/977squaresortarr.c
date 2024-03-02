/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int* squaredNums = (int*)malloc(numsSize * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        squaredNums[i] = nums[i] * nums[i];
    }
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = 0; j < numsSize - i - 1; j++) {
            if (squaredNums[j] > squaredNums[j + 1]) {
                int temp = squaredNums[j];
                squaredNums[j] = squaredNums[j + 1];
                squaredNums[j + 1] = temp;
            }
        }
    }
    *returnSize = numsSize;
    return squaredNums;
}