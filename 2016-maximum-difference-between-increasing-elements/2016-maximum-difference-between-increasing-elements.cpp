class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int min_till_now=nums[0],ans=-1;
        for(int j=1;j<nums.size();j++)
        {
            if(nums[j]>min_till_now)
            {
                ans=max(ans,nums[j]-min_till_now);
            }
            min_till_now=min(min_till_now,nums[j]);
        }
        return ans;
    }
};