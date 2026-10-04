class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> mySet(nums.begin(), nums.end());
        
        if (nums.size() == mySet.size()) {
            return false;
        }
        return true;
    }
};