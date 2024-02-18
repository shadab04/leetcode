class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int final_ans=0,curr_num=0;
        for(int num:nums)
        {
            if(num==0)
            {
                curr_num=0;
            }
            else
            {
                curr_num++;
            }
            final_ans=Math.max(final_ans,curr_num);
        }
        return final_ans;
    }
}