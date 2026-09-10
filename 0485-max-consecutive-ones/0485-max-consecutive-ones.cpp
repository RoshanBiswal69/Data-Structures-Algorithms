class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int maxi = 0;
        int j = 0;
        for(int i = 0;i<n;i++){
            if(nums[i]==1){
            count+=nums[i];
            nums[i]++;
            }else{
                count = 0;
            }
            maxi = max(maxi,count);
        }
        return maxi;
    }
};