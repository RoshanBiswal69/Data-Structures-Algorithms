class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int totalsum = 0;
        int maxsum = INT_MIN;
        int currmax = 0;
        int minsum = INT_MAX;
        int currmin = 0;
        for(int  x:nums){
            currmax = max(x, currmax + x);
            maxsum = max(maxsum, currmax);
            currmin = min(x, currmin + x);
            minsum = min(minsum , currmin);
            totalsum += x;

        }
        return maxsum > 0 ? max(maxsum , totalsum - minsum) : maxsum;

    }
};