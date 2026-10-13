class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long>v;
        for(int i = 0; i<nums.size(); i++){
            v.push_back((long long)nums[i]*(long long)nums[i]);
        }
        sort(v.begin(), v.end());
        vector<long long>vec;
        int h = v.size()-1;
        int l = 0;
        while(l<=h){
            if(l==h){
                vec.push_back(v[l]);
                break;
            }
            vec.push_back(v[h]);
            vec.push_back(v[l]);
            l++;
            h--;
        }
        long long score = 0;
        for(int i = 0; i<vec.size(); i++){
            if(i%2==0){
                score += vec[i];
            }
            else{
                score -= vec[i];
            }
        }
        return score;
    }   
};