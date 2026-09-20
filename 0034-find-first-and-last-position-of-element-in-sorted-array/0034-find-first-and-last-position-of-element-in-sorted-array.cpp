class Solution {
public:
    int bound(vector<int>& nums,int target,bool upper){
        int left = 0;
        int right = nums.size()-1;
        while(left <= right){
            int mid = left + (right - left) / 2;
            
             if (nums[mid] < target || upper && nums[mid] == target) left = mid + 1;
            else right = mid -1;
        }
        return left;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = bound(nums, target, false);
        if(first == nums.size() || nums[first]!= target) return {-1,-1};
        int last = bound(nums,target,true) -1;
        return {first,last};
    }
};