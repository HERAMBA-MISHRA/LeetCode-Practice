class Solution {
public:
    int countDigits(int num) {
        int n = num;
        int ans = 00;
        while(n){
            int number = n%10;
            if( num%number == 0){
                ans++;
            }
            n= n/10;
        }
        return ans;
    }
};