class cmp {
    public:
    bool operator()(pair<int,string> a , pair<int, string> b){
        if(a.first < b.first) return true;
        else if(a.first == b.first && a.second > b.second) return true;
        return false;

    } 
};


class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string , int> mp;
        for(auto w : words) mp[w]++;

        priority_queue<pair<int,string> , vector<pair<int, string>> , cmp> pq;
        for(auto pair : mp){
            pq.push({pair.second,pair.first});
        }
        vector<string> vec;
        while(k--){
            vec.push_back(pq.top().second);
            pq.pop();

        }
        return vec;
    }
};