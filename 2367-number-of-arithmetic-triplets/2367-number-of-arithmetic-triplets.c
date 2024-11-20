int arithmeticTriplets(int* nums, int numsSize, int diff) {
    int count=0,i,j,k;
    for(i=0;i<numsSize-2;i++)
    {
      for(j=i+1;j<numsSize-1;j++)
      {
        for(k=0;k<numsSize;k++)
        {
            if(nums[j] - nums[i] == diff && nums[k] - nums[j] == diff)
            count++;
        }
      }
    }
    return count;
}