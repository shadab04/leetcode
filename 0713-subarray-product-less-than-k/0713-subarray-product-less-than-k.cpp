class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        long pro = 1, ans = 0;
        for (long r = 0, l = 0; r < n; r++) {
            pro *= nums[r];
            while (pro >= k && l <= r) {
                pro /= nums[l];
                l++;
            }
            ans += (r - l + 1);
        }
        return ans;
    }
};
