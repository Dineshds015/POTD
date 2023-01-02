class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> single;
        vector<vector<int>> ans;
        int a[numRows][numRows];
        for(int i=0;i<numRows;i++)
        {
            single.clear();
            for(int j=0;j<=i;j++)
            {
                if(i==j || j==0)
                    a[i][j]=1;
                else
                    a[i][j]=a[i-1][j-1]+a[i-1][j];
                single.push_back(a[i][j]);
            }
            ans.push_back(single);
        }
        return ans;
    }
};
