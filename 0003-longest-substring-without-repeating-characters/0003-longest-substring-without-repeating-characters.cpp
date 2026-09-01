class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int maxlength = 0;
        unordered_set<char> ch;
        for(int right = 0;right<s.size();right++){
            while(ch.find(s[right]) != ch.end()){
                ch.erase(s[left]);
                left++;
            }
            ch.insert(s[right]);
            maxlength = max(maxlength, right-left+1);
        }
        return maxlength;
    }
};