 class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        if (n == 0) return 0;

        sort(points.begin(), points.end());

        vector<int> prev = points[0];
        int count = 1;

        for (int i = 1; i < n; i++) {
            int currStart = points[i][0];
            int currEnd = points[i][1];

            int prevStart = prev[0];
            int prevEnd = prev[1];

            if (currStart > prevEnd) {
                // No overlap, need a new arrow
                count++;
                prev = points[i];
            } else {
                // Update the overlap region
                prev[0] = currStart;
                prev[1] = min(currEnd, prevEnd);
            }
        }

        return count;
    }
};