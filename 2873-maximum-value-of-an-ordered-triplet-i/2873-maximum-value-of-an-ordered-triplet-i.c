long long maximumTripletValue(int* nums, int numsSize) {
    int i,j,k;
    long long ans=0,result=0;
    for(i=0;i<numsSize-2;i++)
    {
       for(j=i+1;j<numsSize-1;j++)
        {
            for(k=j+1;k<numsSize;k++)
            {
               ans=(long long)(nums[i] - nums[j]) * nums[k];
               if(ans>result)
                 result =ans;
            
            }
        }
    }
    return result;
}