class Solution {
public:
    int reverse(int x) {
        long num = 0;
        int sign = (x>0)?1:-1;
        while (x)
        {
            int rem = x%10;
            x=x/10;
            if ( sign *(num*10 + rem)<-pow(2,31) || sign *(num*10 + rem)>pow(2,31)-1)
            {
            return 0;
            }
            else
            {
                num = num * 10 + rem;
            }
            
        }
        //num = sign * num;
        int ans = ( int)num;
        return num  ;
        
    }
};