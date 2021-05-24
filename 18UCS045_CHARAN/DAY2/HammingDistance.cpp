int Solution::hammingDistance(const vector<int> &A) {
   
   long long int n=A.size();
   long long  sum=0;
   for(int i=0;i<32;i++)
   {
       long int c=0;
       for(int j=0;j<n;j++)
       {
           if(A[j]&(1<<i))
           {
               c++;
           }
       }
       sum=sum+(c*(n-c)*2)%1000000007;
   }
    return sum%1000000007;
    
}
