class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>array;
        while(!nums.empty()){
            int min = INT_MAX;
            int min2 = INT_MAX;
            for(int i = 0; i<nums.size(); i++){
                if(nums[i]<min){
                    min = nums[i];
                }
            }
            for(int i = 0; i<nums.size(); i++){
                if(nums[i]==min){
                    nums.erase(nums.begin()+i);
                    break;
                }
            }
            for(int i = 0; i<nums.size(); i++){
                if(nums[i]<min2 ){
                    min2 = nums[i];
                }
            }
            array.push_back(min2);
            array.push_back(min);

            
            for(int i = 0; i<nums.size(); i++){
                if(nums[i]==min2){
                    nums.erase(nums.begin()+i);
                break;

                }
            }

        }
        return array;
    }  
};