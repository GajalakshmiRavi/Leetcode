int sumIndicesWithKSetBits(int* nums, int numsSize, int k) {
   int i,count,r,l,ans=0;
    for(i=0;i<numsSize;i++)
    {  count=0;l=i;
        while(l!=0)
        {
            r=l%2;
            if(r==1)
            count++;
            l=l/2;
        }
        if(count==k)
         ans+=nums[i];
    }
    return ans;
}