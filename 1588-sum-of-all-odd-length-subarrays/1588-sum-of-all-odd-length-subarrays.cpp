class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int ans= 0;
        for(int left = 0;left < n;left++){
            int currsum = 0;
            for(int right = left ; right < n;right++){
                currsum+=arr[right];
                ans+=(right - left + 1) % 2 ==1 ? currsum : 0;
            }
        }
        return ans;

    }
};