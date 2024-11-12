/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    int count,i=0,k,r;
    int *ans=(int*)malloc((n+1)*sizeof(int));
        for(i=0;i<=n;i++){
            k=i;
          if(i==0)
            ans[i]=0;
          else
          { count=0;
            while(k!=0)
            {
               r=k%2;
             if(r==1){
               count++;
              }
             k=k/2;
            }
            ans[i]=count;
          }
        }
        *returnSize=(n+1);
        return ans;

    
    
    

    
}