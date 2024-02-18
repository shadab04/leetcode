class Solution {
    public int missingNumber(int[] nums) {
        int n=nums.length;
        int missing_num=-1;
        for(int i=0;i<=n;i++)
        {
            boolean found=false;
            for(int num:nums)
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
}