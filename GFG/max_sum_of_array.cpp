class Solution{
    public:
    int Maximize(int a[],int n)
    {
        sort(a,a+n);
        int sum=0;
       for(long long int i=0;i<n;i++)
       {
           sum=(sum+a[i]*i)%1000000007;
       }
       return sum%1000000007;  //finding the proper modulo
    }
};