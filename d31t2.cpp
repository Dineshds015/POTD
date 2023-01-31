// 303. Range Sum Query - Immutable

class NumArray {
    vector<int> ans;
public:
    NumArray(vector<int>& nums) {
        int sum=nums[0];
        ans.push_back(sum);
        for(int i=1;i<nums.size();i++)
        {
            sum+=nums[i];
            ans.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        if(left>0)
            return ans[right]-ans[left-1];
        return ans[right];
    }
};