class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> arr;
        for(int i: nums){
            arr.push_back(to_string(i));
        }
        sort(arr.begin(),arr.end(),[](const string a, const string b){
            return a+b > b+a;
        });
        string s;
        for(string x:arr){
            s+=x;
        }
        while(s.length()>1 and s[0]== '0'){
            s.erase(0,1);
        }
        return s;
    }
};