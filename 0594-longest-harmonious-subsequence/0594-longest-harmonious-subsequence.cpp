class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j = 0;
        int maxlen = 0;
int  n = nums.size();
        for(int  i = 0;i<n;i++){
            while(nums[i] - nums[j] > 1){
                j++;
            }
            if(nums[i]-nums[j] == 1){
                maxlen = max(maxlen , i-j+1);
            }
        }
        return maxlen;
    }
};