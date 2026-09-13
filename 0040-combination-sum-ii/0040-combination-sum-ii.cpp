class Solution {
    private:
    void backtrack(const vector<int>& candidates,int start, int target, vector<int>& path, vector<vector<int>>& result){
        if(target == 0){
            result.push_back(path);
            return;
        }
    

        for(int i = start;i<candidates.size();i++){
                if(i>start && candidates[i] == candidates[i-1]) continue;
                if(candidates[i] > target) break;
                path.push_back(candidates[i]);
                backtrack(candidates,i+1,target - candidates[i],path,result);
                path.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> path;
        sort(candidates.begin(),candidates.end());
        backtrack(candidates,0,target,path,ans);
        return ans;
    }
};