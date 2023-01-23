class Solution {
public:
    bool isPalindrome(int x) {
    long long ans=0;
        long long ans2=x;
    while(x>0){
        ans = ans*10+x%10;
        x=x/10;
    }
        if (ans ==ans2)
        {
            return true;
        }
        else
        {
            return false;
        }
        
        
        
    }
};