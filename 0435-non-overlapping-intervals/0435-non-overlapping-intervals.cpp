class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n = intervals.size();
        int cnt = 0;
        int previousEnd = intervals[0][1];

        for(int i = 1; i<n;i++){
            int currentStart = intervals[i][0];
            if(currentStart < previousEnd){
                cnt++;

                previousEnd = min(previousEnd, intervals[i][1]);
            }else{
                previousEnd = intervals[i][1];
            }
        }
        return cnt;
    }
};