class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int k=0;
        for(int i = 0;i<n;i++){
            if(mp[nums[i]] == 0){
                mp[nums[i]]++;
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};