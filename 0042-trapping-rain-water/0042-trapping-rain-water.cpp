class Solution {
public:
    int trap(vector<int>& height) {
        int start = 0;
        int end = height.size()-1;

        int leftMax =0 ;
        int rightMax = 0;
        int total = 0;
        while(start < end){
            leftMax = max(leftMax, height[start]);
            rightMax = max(rightMax, height[end]);

            if(leftMax < rightMax){
                total += leftMax - height[start];
                start++;
            }else{
                total += rightMax- height[end];
                end--;
            }
        }
        return total;
    }
};