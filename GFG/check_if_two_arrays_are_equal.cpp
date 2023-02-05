//User function template for C++

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        int i=0;
        while (i<N)
        {
            if (A[i]==B[i])
            {
                i++;
            }
            else
            {
                return 0;
            }
        }
        return 1;
          
       
    }
};