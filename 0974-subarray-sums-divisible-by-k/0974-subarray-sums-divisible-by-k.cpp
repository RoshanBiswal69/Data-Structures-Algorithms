class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        
        vector<int> prefix(k,0);
        int cnt = 0;
        prefix[0]++;
        int currsum = 0;
        for(int i = 0;i<n;i++){
           currsum = (currsum + nums[i]%k + k) %k;
           cnt+= prefix[currsum];
        prefix[currsum]++;
            
            
        }
        return cnt;
    }
};