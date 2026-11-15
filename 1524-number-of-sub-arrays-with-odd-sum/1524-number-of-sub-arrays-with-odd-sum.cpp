class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int mod = 1e9+7;
        int even = 1;
        int odd =0;
        long long ans =0;
        int sum = 0;
        for(int x:arr){
            sum = (sum+x)%2;
            if(sum==1){
                ans = (ans + even) % mod;
                odd++;
            }else{
                ans = (ans + odd) % mod;
                even++;
            }
        }
        return ans;
    }
};