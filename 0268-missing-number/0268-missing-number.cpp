class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int missing_num=-1;
        for(int i=0;i<=n;i++)
        {
            bool found=false;
            for(auto num:nums)
            {
                if(num==i)
                {
                    found=true;
                    break;
                }
            }
            if(!found)
            {
                missing_num=i;
                break;
            }
        }
        return missing_num;
    }
};