class Solution {
public:
    bool checkValidString(string s) {
        stack<int> open;
        stack<int> star;

        int n = s.size();
        for(int i = 0;i<n;i++){
            if(s[i] == '(') open.push(i);
            else if(s[i] == '*') star.push(i);
            else{
                if(!open.empty()){
                    open.pop();
                }else if(!star.empty()) star.pop();
                else return false;
            }
        }
        if(open.empty()) return true;
        else{
            while(!open.empty() && !star.empty() && open.top() < star.top()){
                open.pop();
                star.pop();

            }
            if(open.empty()) return true;
        }
        return false;
    }
};