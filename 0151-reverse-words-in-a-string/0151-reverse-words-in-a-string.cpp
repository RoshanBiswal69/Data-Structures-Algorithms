class Solution {
public:
    string reverseWords(string s) {
        vector<string> ans;
        string word = "";
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i] != ' '){
                word +=s[i];
                
            }else if(!word.empty()){
                ans.push_back(word);
                word ="";
            }
          
        }
          if(!word.empty()){
            ans.push_back(word);
          }

          reverse(ans.begin(),ans.end());
        string result ="";
        for(int i = 0;i<ans.size();i++){
            result += ans[i];
            if(i<ans.size()-1) result +=' ';
        }
return result;

    }
};