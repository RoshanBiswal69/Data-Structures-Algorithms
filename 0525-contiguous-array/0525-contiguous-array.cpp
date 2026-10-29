class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        unordered_map<int,int> freq;
        for(int i = 0;i<n;i++){
            if(nums[i] == 0) nums[i] = -1;

        }
        int sum = 0;
        for(int i =0;i<n;i++){
            sum+=nums[i];
            if(sum == 0) ans = i+1;
            if(freq.find(sum) != freq.end()) ans = max(ans, i-freq[sum]);
            else
            freq[sum] = i;
        }
        return ans;
    }
};