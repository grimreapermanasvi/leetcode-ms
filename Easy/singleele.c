int singleNumber(int* nums, int numsSize) {
    int i,k=0;
    for(i=0;i<numsSize;i++){
         k=k^nums[i];
    }
      return k;
}