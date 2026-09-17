class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size()<t.size()){
            return "";
        }
        unordered_map<char, int> map;
        int m = t.size();
        int start = 0;
        int end = 0;
        int minLen = INT_MAX;
        int startIndx = 0;
        for(char ch : t){
            map[ch]++;
        }
        while(end < s.length()){
            if(map[s[end++]] --> 0){
                m--;
            }
            while(m ==0){
                if(end- start < minLen){
                    startIndx = start;
                    minLen = end - start;
                }
                if(map[s[start++]]++ == 0) m++;
            }
        }
        
        return minLen == INT_MAX ? "" : s.substr(startIndx, minLen) ;
    }
};