vector<int> minAnd2ndMin(int a[], int n) {
    vector<int> ans;
    sort(a,a+n);
    int count=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
            count++;
    }
    if(count==n)
        ans.push_back(-1);
    
    else
    {
        ans.push_back(a[0]);
        for(int i=0;i<n;i++)
        {
            if(a[i]!=a[i+1])
            {
                ans.push_back(a[i+1]);
                return ans;
            }
        }
    }
    return ans;
}
