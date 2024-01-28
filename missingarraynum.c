int missingNumber(int* nums, int numsSize) {
    int expectedSum = numsSize *( numsSize + 1)/2;

    int actualSum = 0;
    int i;
    for( i=0;i<numsSize;++i)
       actualSum += nums[i];
    
    return expectedSum - actualSum ;
}