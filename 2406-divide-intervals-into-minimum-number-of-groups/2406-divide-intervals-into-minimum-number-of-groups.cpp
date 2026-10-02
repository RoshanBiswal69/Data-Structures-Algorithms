class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());

        priority_queue<int, vector<int> , greater<int>> pq;
        for(int i=0;i<n;i++){
            int left = intervals[i][0];
            int right = intervals[i][1];

            if(pq.empty()){
                pq.push(right);
            }else{
                if(pq.top()>=left){
                    pq.push(right);
                }else{
                    pq.pop();
                    pq.push(right);
                }
            }
        }
        return pq.size();
    }
};