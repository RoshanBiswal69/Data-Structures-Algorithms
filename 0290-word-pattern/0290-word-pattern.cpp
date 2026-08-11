class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> v;
        s.push_back(' ');
        string str ="";
        for(char & ch: s){
            if(ch ==' '){
                v.push_back(str);
                str ="";
            }else{
                str += ch;
            }
        }

        if(v.size()!= pattern.size())
            return false;

        int n = pattern.size();
        unordered_map<char, string> mp1; 
        unordered_map<string, char> mp2; 
        for(int i=0; i<n; i++){
            if(mp1.find(pattern[i]) == mp1.end()){ 
                mp1[pattern[i]] = v[i]; 
            }

            if(mp2.find(v[i]) == mp2.end()){ 
                mp2[v[i]] = pattern[i];
            }

            if(mp1.find(pattern[i]) != mp1.end() && mp1[pattern[i]] != v[i]){
                return false; 
            }

            if(mp2.find(v[i]) != mp2.end() && mp2[v[i]] != pattern[i]){
                return false; 
            }
        }
        return true;
    }
};