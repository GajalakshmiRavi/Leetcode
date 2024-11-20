long long findTheArrayConcVal(int* nums, int numsSize) {
    long long ans=0,ans1=0,i,j,k;
    int digit;
    i=0; j=numsSize-1;
    while(i<j)
    {  k=nums[j];
       digit=0; 
        while(k!=0)
        {
            digit++;
            k/=10;
        }
        ans=nums[i]*pow(10,digit)+nums[j];
        i++;
        j--;
          ans1+=ans;
    }
    if(i==j)
    ans1+=nums[i];

    return ans1;
}