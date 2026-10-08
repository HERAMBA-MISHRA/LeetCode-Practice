class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        vector<int>array;
        for(int i = 0; i<words.size(); i++){
            int sum = 0;
            for(int j = 0; j<words[i].size(); j++){
                sum+=weights[words[i][j] - 'a'];
            }
            sum = sum%26;
            array.push_back(sum);
        }
        string ans;
        for(int i = 0; i< array.size(); i++){
            ans.push_back(char('z' - array[i]));
        }
        return ans;
    }
};