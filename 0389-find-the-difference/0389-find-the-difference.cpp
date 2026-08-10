class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> count(26,0);
        int n = s.size();
        for(int i =0;i<n;i++){
            count[s[i]-'a']++;
        }
        for(int i =0;i<t.size();i++){
            count[t[i]-'a']--;
            if(count[t[i]-'a'] == -1){
                return t[i];
            }
        }
        return 0;
    }
};