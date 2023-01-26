// 643. Maximum Average Subarray I

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0,max=INT_MIN,avg=0;
        int i=0,j=0;
        while(j<nums.size())
        {
            sum+=nums[j];
            if(j-i+1==k)
            {
                avg=sum/k;
                if(avg>max)
                    max=avg;
                sum-=nums[i];
                i++;
            }
            j++;
        }
        return max;
    }
};
