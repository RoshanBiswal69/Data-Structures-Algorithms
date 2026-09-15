class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mp;
        int n = s.size();
        int maxF =0;
        int maxi =0;
        int left =0;
        for(int right = 0;right<n;right++){
            mp[s[right]]++;
            maxF = max(maxF , mp[s[right]]);
            while((right - left+1) - maxF > k){
                mp[s[left]]--;
                 left++;
            }
           maxi = max(maxi ,right-left +1);
        }
        return maxi;
    }
};