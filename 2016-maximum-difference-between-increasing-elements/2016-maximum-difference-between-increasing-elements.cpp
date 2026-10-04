class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minnum = nums[0];
        int maxdif = 0;

        for(int i : nums){
            minnum = min(minnum, i);
            maxdif = max(maxdif, i -minnum);
        }
        if(maxdif>0){
            return maxdif;
        }
        return -1;
    }
};