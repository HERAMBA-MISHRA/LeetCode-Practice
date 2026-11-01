class Solution {
public:
    int minMoves(vector<int>& nums) {
        int moves = 0;
        int min = *std::min_element(nums.begin(), nums.end());
        for(int i = 0; i<nums.size(); i++){
            moves += nums[i]-min;
        }
        return abs(moves);
    }
};