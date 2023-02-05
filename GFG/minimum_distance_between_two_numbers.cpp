#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        int i,j ;
        int mini =INT_MAX;
        int prev;
        for ( i =0;i<n;i++)
        {
            if (a[i]==x || a[i]==y)
            {
                prev =i;
                break;
            }
        }
        for (;i<n;i++)
        {
            if (a[i]==x || a[i]==y){
               if (a[prev]!=a[i] && (i-prev)<mini)
               {
                   mini =(i-prev);
                   prev =i;
               }
               else{
                   prev =i;
               }
            }
        }
        if (mini ==INT_MAX)
            {
                return -1;
            }
        else
        {
            return mini;
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}