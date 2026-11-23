class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num<1)return false;
        int ans = 0;
        int low = 0, high = num;
        while(low<=high){
            long long mid = low+ (high - low)/2;
            long long sq = mid*mid;
            if(sq == num){
                return true;
            }
            else if(sq>= num){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return false;
    }
};