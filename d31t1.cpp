//162. Find Peak Element

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int low=0,high=nums.size()-1,mid=(low+high)/2;
        while(low<high)
        {
            if(nums[mid]<=nums[mid+1])
                low=mid+1;
            else 
                high=mid;
            mid=(low+high)/2;
        }
        return low;
    }
};