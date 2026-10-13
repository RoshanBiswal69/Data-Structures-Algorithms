class Solution {
    private:
    int fxn(int n ){
        int output = 0;
        while(n>0){
            int digit  = n % 10;
            output += digit * digit;
            n = n/10;
        }
        return output;
    }
public:
    bool isHappy(int n) {
        int slow = fxn(n);
        int fast = fxn(fxn(n));
        while(slow!=fast){
            if(fast == 1) return true;
            slow = fxn(slow);
            fast = fxn(fxn(fast));
        }
        return slow == 1;
    }
};