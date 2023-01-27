// 1748. Sum of Unique Elements

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        set<int> temp;
        for(int i=0;i<nums.size();i++)
            temp.insert(nums[i]);
        auto it=temp.begin();
        for(int i=0;i<temp.size();i++)
        {
            int count=0;
            for(int j=0;j<nums.size();j++)
            {
                if(*it==nums[j])
                    count++;
            }
            if(count<2)
                sum+=*it;
            *it++;
        }
        return sum;
    }
};
