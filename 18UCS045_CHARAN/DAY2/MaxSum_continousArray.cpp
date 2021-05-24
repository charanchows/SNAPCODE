int Solution::maxSubArray(const vector<int> &A) {
    int n=A.size();
    int ans=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+A[i];
        if(A[i]>sum)
        {
            sum=A[i];
        }
        ans=max(ans,sum);
    }
    return ans;
}

