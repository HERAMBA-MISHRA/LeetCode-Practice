class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>ans;
        for(int i = 0; i<operations.size(); i++){
            if(operations[i] == "+"){
                int n = ans.size();
                int sum = ans[n-1]+ans[n-2];
                ans.push_back(sum);
            }
            else if(operations[i] == "C"){
                int n = ans.size()-1;
                ans.erase(ans.begin()+n);
            }
            else if(operations[i] == "D"){
                int n = ans.size()-1;
                ans.push_back(ans[n]*2);
            }
            else{
                int x = stoi(operations[i]);
                ans.push_back(x);
            }
        }
        int score = accumulate(ans.begin(), ans.end(), 0);
        return score;
    }
};