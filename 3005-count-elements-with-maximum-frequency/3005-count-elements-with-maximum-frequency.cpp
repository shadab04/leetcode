class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        const int maxValue = 101;// the maximum value in nums will be <=100 
        int freq[maxValue] = {0};
        int max = 0, ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
            if (freq[nums[i]] > max) {
                max = freq[nums[i]];
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            if (freq[nums[i]] == max) {
                ans++;
            }
        }

        return ans;

    }
};
