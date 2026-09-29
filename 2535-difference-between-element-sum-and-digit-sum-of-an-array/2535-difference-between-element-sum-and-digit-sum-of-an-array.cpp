class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int digsum = 00;
        for( int i = 00; i<nums.size(); i++){
            int temp = 00;
            int num = nums[i];
            while(num){
                temp += num%10;
                num = num/10;
            }
            digsum = temp + digsum;
        }
        return abs(sum - digsum);
    }
};