class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
         vector<pair<int, char>> vec;
        for (auto it : mpp) {
            vec.push_back({it.second, it.first});
        }
        sort(vec.rbegin(),vec.rend());
        string ans="";
        for(auto it:vec){
         ans+=string(it.first,it.second);
        }
        return ans;
    }
};