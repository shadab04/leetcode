class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int final_ans=0,curr_num=0;
        for(auto num:nums)
        {
            if(num==0)
            {
                curr_num=0;
            }
            else
            {
                curr_num+=1;
            }
            final_ans=max(final_ans,curr_num);
        }
        return final_ans;
    }
};