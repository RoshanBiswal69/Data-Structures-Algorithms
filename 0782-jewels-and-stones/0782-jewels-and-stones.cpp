class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
       
        unordered_map<char,int> stonecount;
        for(char stone : stones){
            stonecount[stone]++;
        }
        int jewelcount = 0;
        for(char jewel : jewels){
            jewelcount+= stonecount[jewel];
        }
        return jewelcount;
    }
};