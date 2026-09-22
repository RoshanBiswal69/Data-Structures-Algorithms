class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int freq[26]={0};
        int left = 0;
        int right = 0;
        int maxlen = 0;
        int maxfreq = 0;

        while(right <n){
            char ch = s[right];
            freq[ch-'A']++;
            maxfreq =max(maxfreq,freq[ch-'A']);


            if((right - left + 1) - maxfreq > k){
                freq[s[left]-'A']--;
                left++;
            }
            maxlen = max(maxlen,right - left + 1);
            right ++;
        }
        return maxlen;
    }
};