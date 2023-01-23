// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int scores(long long a[], long long b[], int &ca, int &cb)
    {
         for (int i = 0, j = 0; i < 3, j < 3; i++, j++)
            if (a[i] > b[j])
            {
                ca = ca + 1;
            }
            else if (a[i] < b[j])
            {
               cb=cb+1; 
            }
        return ca,cb;// Your code goes here   
    }
};

// { Driver Code Starts.
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        long long int a[5], b[5], i=0;
        int ca=0, cb=0;
        for(i=0; i<3; i++)
            cin>>a[i];
    
        for(i=0; i<3; i++)
            cin>>b[i];
        Solution ob;
        ob.scores(a, b, ca, cb);
        
        cout<<ca<<" "<<cb<<endl;
    }
    return 0 ;
}  // } Driver Code Ends