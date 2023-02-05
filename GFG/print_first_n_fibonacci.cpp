class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
vector<long long> printFibb(int n) 

    {

        //code here

        vector<long long> v1={1,1};

        

        if(n==1){

            v1.pop_back();

            return v1;

        }

        for(int i=2;i<n;i++)

            v1.push_back(v1[i-1] + v1[i-2]);

        

        return v1;

    }      
};