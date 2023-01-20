// Find the Highest number

class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        // Code here.
        int max=-1;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]>max)
                max=a[i];
        }
        return max;
    }
};
