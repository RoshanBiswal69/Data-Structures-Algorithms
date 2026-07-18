class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int count =0;
        int max = 0;
        for(int i = n-1;i>0;i--){
            if(nums[i]!=nums[i-1]){
                count++;
                max = nums[i];
            }
            else if(i==1 && nums[i]== nums[i-1]){
                count++;
                max = nums[i];
            }
            if(count>2){
                return max;
            }
        }
        if(count+1 == 3 && nums[0] != nums[1]){
            return nums[0];
        }
        return nums[n-1];
   
    }
};