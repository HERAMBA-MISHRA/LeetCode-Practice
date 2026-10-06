class Solution {
public:
    int minAddToMakeValid(string s) {
        vector<char>v;
        for(int i = 0; i<s.size(); i++){
            if(s[i]=='('){
                v.push_back(s[i]);
            }
            else{
                if(!v.empty() && v.back()=='('){
                    v.pop_back();
                }
                else{
                    v.push_back(s[i]);
                }
            }
        }
        return v.size();
    }
};