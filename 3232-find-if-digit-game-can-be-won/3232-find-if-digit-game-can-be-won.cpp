class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int allice = 0, bob = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]<10){
                bob += nums[i];
            }
            else{
                allice += nums[i];
            }
        }
        if(allice>bob){
            return true;
        }
        allice = 0;
        bob =0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]>9){
                bob += nums[i];
            }
            else{
                allice += nums[i];
            }
        }
        if(allice>bob){
            return true;
        }
        return false;
    }
};