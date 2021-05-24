unsigned int Solution::reverse(unsigned int A) {
    unsigned int B=0;
    int k;
    for(int i=0;i<32;i++)
    {
        k=A&1;
        B=B|k;
        B<<=1;
        A>>=1;
    }
    return B;
