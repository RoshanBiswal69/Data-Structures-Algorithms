class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int l=1;
        int r = *max_element(nums.begin(), nums.end());

        int ans=INT_MAX;
        while(l<=r){
            double sum=0;
            int d = l + (r-l)/2;
            for(int j=0; j<nums.size(); j++){
                // sum += ceil((double)nums[j]/d);
                sum += (nums[j] + d - 1) / d;
                
            } 
            if(sum<=threshold){
                r=d-1;
                if(d < ans){
                    ans=d;
                }
            }
            else{
                l=d+1;
            }
        }
        return ans;
    }
};