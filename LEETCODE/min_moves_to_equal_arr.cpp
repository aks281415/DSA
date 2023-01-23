class Solution {
public:
    int minMoves(vector<int>& nums) {
        int count =0;
        int n = nums.size();
        int m = INT_MAX;
        for ( int i =0;i<nums.size();i++)
        {
            m =  min (m,nums[i]);
        }
         for ( int i =0;i<nums.size();i++)
         {
             count = count + (nums[i]-m);
         }
        return count;
    }
            
        
};