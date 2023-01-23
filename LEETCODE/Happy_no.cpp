class Solution {
public:
    bool isHappy(int n) {
      set<int> s1;
        int sum =0;
        int d=0;
        while (1)
        {
            sum=0;
            while (n>0)
            {
               d=n%10;
                sum = sum +(d*d);
                n = n/10;
            }
            if (s1.find(sum)!=s1.end())
            {
                return false;
            }
            else if (sum ==1)
            {
                return true;
            }
            s1.insert(sum);
            n = sum;
        }
        //return false;
        
    }
};