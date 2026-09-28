class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int m = p.size();
        int n = s.size();
        vector<int> ans;
        if(n<m) return ans;
        unordered_map<char,int> smap,pmap;
        for(char ch:p){
            pmap[ch]++;
        }
        int count = 0;
       int left = 0;
       int right = 0;
       while(right < m){
        char r = s[right];
        smap[r]++;

        if(pmap[r] > 0 && smap[r] <= pmap[r]) count++;
        right++;
       }


       if(count == m) ans.push_back(left);
       while(right < n){
        char l = s[left];
        if(pmap[l] > 0 && smap[l] <=pmap[l]) count--;
        smap[l]--;
        left++;


        char r = s[right];
        smap[r]++;

        if(pmap[r] > 0 && smap[r] <=pmap[r]) count++;

        if(count == m) ans.push_back(left);
        right++;
       }
       return ans;
    }
};