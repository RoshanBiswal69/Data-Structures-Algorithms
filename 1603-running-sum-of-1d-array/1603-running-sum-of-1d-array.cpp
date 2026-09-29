class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        int currsum = 0;
        vector<int> ans;
        unordered_map<int, int> mp;
        for(int i = 0;i<n ;i++){
        currsum+=nums[i];
        ans.push_back(currsum);
        }
        return ans;
    }
};