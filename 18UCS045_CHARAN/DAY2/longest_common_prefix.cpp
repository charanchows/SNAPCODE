string common(string s,string s1)
{
 int i=0;
 int c=0;
 string S="";
 while(s[i]==s1[i])
 {
     S+=s[i];
     i++;
 }
 return S;
}
string Solution::longestCommonPrefix(vector<string> &A) {
    int n=A.size();
    string x;
    string longest="";
    if(n==0)
    {
        return longest;
    }
    if(n==1)
    {
        return A[0];
    }
    for(int i=0;i<n-1;i++)
    {
        x=common(A[i],A[i+1]);
        if(x=="")
        {
            return "";
        }
        if(longest.length()==0 || x.length()<longest.length())
        {
            longest=x;
        }
    }
    return longest;
}
