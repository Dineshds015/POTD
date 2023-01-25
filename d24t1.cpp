//Two Sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0,j=0;
        int sum=0;
        vector<int> pos;
      //Funda of Sliding window applied but in question not mentioned that sum of subarray(continued array).
        /*while(j<nums.size())
        {
            cout<<sum<<" ";
            sum+=nums[j];
            if(j-i+1==2)
            {
                if(sum==target)
                {
                    pos.push_back(i);
                    pos.push_back(j);
                    return pos;
                }
                else
                {
                    sum-=nums[i++];
                }
            }
            j++;
        }*/

        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target && i!=j)
                {
                    pos.push_back(i);
                    pos.push_back(j);
                    return pos;
                }
            }
        }
        return pos;
    }
};
