class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
        vector<int> s1cnt(26,0) , s2cnt(26,0);

        for(int i = 0;i<s1.length();i++){
        s1cnt[s1[i]-'a']++;
        s2cnt[s2[i]-'a']++;
    }


    for(int i =0 ;i<s2.length()-s1.length();i++){
        if(s1cnt == s2cnt) return true;
        s2cnt[s2[i] - 'a']--;
        s2cnt[s2[i+s1.length()]-'a']++;
    }
    return s1cnt == s2cnt;
}
};