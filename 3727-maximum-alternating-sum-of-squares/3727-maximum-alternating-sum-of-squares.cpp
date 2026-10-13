class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {

        for(auto& num : nums){
            if(num < 0){
                num = -num;
            }
        }
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int low = 0;
        int high = n-1;
        long long score = 0;
        while(low<high){
            score = score + (1ll * nums[high]*nums[high]) - (1ll * nums[low] * nums[low]);
            low++;
            high--;
        }
        if(low == high){
            score = score + (1ll * nums[low]*nums[low]);
        }
return score;
    }
};