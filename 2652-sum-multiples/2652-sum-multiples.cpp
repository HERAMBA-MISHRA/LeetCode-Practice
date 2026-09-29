class Solution {
public:
    int sumOfMultiples(int n) {
        vector<int>v;
        for(int i = 1; i<=n; i++){
            if(i%3==0 || i%5 == 0|| i%7 == 0){
                v.push_back(i);
            }
        }
        int sum = accumulate(v.begin(), v.end(), 0);
        return sum;
    }
};