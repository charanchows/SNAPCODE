int Solution::sqrt(int A)
{
 if(A==0) return 0;
int low=0, hi=A;
while(low<=hi)
{
long long mid=low+(hi-low)/2;
if(mid*mid==A)
{
    return mid;
}
if(mid*mid>A) hi=mid-1;
else low=mid+1;
}
return low-1;
}
