class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n = arr.size();
        for(int i = 0; i<n; i++){
            if(arr[i]%2 != 0){
                i++;
                if(i<n && arr[i]%2 != 0 ){
                    i++;
                    if(i<n && arr[i]%2 != 0){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};