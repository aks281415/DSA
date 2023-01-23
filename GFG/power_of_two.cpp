//User function Template for C++

class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        if (n==0)
        {
            return false;
        }
        int ans = n & (n-1);
        if (ans ==0)
        {
            return true;
        }
        else
        {
            
            return false;
        }
        
    }
};