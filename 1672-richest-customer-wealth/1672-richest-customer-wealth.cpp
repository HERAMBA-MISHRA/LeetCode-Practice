class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max =INT_MIN;
        for(int i = 0; i<accounts.size(); i++){
            int sum = accumulate(accounts[i].begin(), accounts[i].end(), 0);

            if(sum>max){
                max = sum;
            }
        }
        return max;
    }
};