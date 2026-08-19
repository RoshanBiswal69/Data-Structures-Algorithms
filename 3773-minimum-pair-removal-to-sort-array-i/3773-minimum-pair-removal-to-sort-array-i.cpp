class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int t= 0;
        while(!is_sorted(nums.begin(),nums.end())){
            int minsum = INT_MAX;
            int n = nums.size();
            int index = 0;
            for(int i =0;i<n-1;i++){
                if(nums[i] + nums[i+1] < minsum){
                    index = i;
                    minsum = nums[i] + nums[i+1];

                }
            }
            nums[index+1] = minsum;
            nums.erase(nums.begin()+index);
            t++;
        }
        return t;
    }
};