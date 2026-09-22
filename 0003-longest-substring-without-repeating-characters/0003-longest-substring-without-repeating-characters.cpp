class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n =s.size();
        unordered_set<char> charset;
        int maxi = 0;
        int left = 0;
        for(int right = 0;right < n ;right++){
            while(charset.find(s[right]) != charset.end()){
                charset.erase(s[left]);
                left++;
            }
            charset.insert(s[right]);
            maxi = max(maxi, right - left +1);
        }
        return maxi;
    }
};