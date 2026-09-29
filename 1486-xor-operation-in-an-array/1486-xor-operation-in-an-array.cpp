class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>v;
       for(int i = 0; i<n; i++){
            v.push_back(start + 2 * i);
       }
       int ans = 00;
       for(int x : v){
        ans^=x;
       }
       return ans;
    }
};