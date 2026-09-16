class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int tc = 0;
        int sum = 0;
        vector<int> prefix(nums.size()+1);
        prefix[0] = 1;
        for(int num : nums){
            sum += num;
            if(sum >= goal){
                tc += prefix[sum - goal];
            }
            prefix[sum]++;
        } 
        return tc;
    }
};