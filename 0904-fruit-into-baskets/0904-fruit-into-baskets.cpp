class Solution {
public:
    int totalFruit(vector<int>& fruit) {
          unordered_map<int, int> basket;
        int n = fruit.size();
        int left =0;
        int maxi= 0;
        for(int right = 0;right<n;right++){
            basket[fruit[right]]++;
            while(basket.size()>2){
                basket[fruit[left]]--;
                if(basket[fruit[left]] == 0){
                basket.erase(fruit[left]);
            }
            left++;
            }
           maxi = max(maxi ,right - left+1); 
            
        }
       return maxi;

    }
};