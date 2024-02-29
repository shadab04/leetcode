class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int final_ans=0,zero_count=0;
        int l=0;
        for(int r=0;r<n;r++ )
        {
            if(nums[r]==0) zero_count++;
            while(zero_count>k)
            {
                if(nums[l]==0)
                {
                    zero_count--;
                }
                l++;
            }
            final_ans=max(final_ans,r-l+1);
        }
        return final_ans;
    }
};