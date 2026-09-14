class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        string findi = s + s;
        for(int i =0; i<s.size();i++){
            if(findi.find(goal) != string::npos){
                return true;
            }
        }
        return false;
    }
};