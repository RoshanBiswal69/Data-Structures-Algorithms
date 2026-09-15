class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = 0;
        int countzeroes = 0;
        int left = 0;
        for(int right =0;right < n;right++){
            if(nums[right] == 0){
                countzeroes++;
            }
            while(countzeroes > k){
                if(nums[left] == 0) countzeroes--;
                 left++;
            }
           maxi = max(maxi , right - left +1);
        }
        return maxi;
    }
};