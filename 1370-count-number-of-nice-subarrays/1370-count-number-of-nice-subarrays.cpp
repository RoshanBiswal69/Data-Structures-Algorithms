class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int prefix = 0;
        int odd = 0;
        int ans = 0;
        for(int right = 0;right < n;right++){
            
            if(nums[right] %2 == 1){
                odd++;
                prefix = 0;
            }
            while(odd == k){
                    prefix++;
                    if(nums[left] %2 == 1){
                        odd--;
                    }
                     left++;
            } 
            ans += prefix;
           
        }
        return ans;
    }
};