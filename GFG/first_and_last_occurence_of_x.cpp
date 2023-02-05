vector<int> find(int arr[], int n , int x )
{
    int a = -1;
    int b =-1;
    for ( int i =0 ; i<n;i++)
    {
        if (arr[i]==x)
        {
            a =i;
            break;
        }
    }
    for (int j=n-1;j>=0;j--)
    {
        if (arr[j]==x)
        {
            b =j;
            break;
        }
    }
    return {a,b};
    
}