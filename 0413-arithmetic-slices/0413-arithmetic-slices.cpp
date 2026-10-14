class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return 0;

        int cnt = 0;
        int diff = 0;
        int ind = 0;
        int prev_diff = nums[1] - nums[0];

        for(int i = 1;i < n-1;i++){
                int diff = nums[i+1]-nums[i];
                if(diff == prev_diff) ind++;
                else{
                    prev_diff = diff;
                    ind = 0;
                }
                cnt += ind;
        }
        return cnt;
    }
};