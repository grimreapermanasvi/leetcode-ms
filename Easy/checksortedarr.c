bool check(int* nums, int numsSize) {
    int count=0;
    for(int i=1;i<numsSize;i++){
        if(nums[i-1]>nums[i]){
            count++;
        }
    }
    if(nums[0]<nums[numsSize-1]){
        count++;
    }
    return count<=1;
}