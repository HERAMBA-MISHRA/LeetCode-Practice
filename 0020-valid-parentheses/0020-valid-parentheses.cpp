class Solution {
public:
    bool isValid(string s) {
        if(s.size()==1){
            return false;
        }
       vector<char>v;
        for(int i = 0; i<s.size(); i++){
            if(s[i]=='('){
                v.push_back('(');
            }
            if(s[i]=='['){
                v.push_back('[');
            }
            if(s[i]=='{'){
                v.push_back('{');
            }
            if(s[i]==')'){
                if(v.empty()){
                    return false;
                }
                int n = v.size();
                if(v[n-1]!='('){
                    return false;
                }
                else{
                    v.pop_back();
                }
            }
            if(s[i]=='}'){
                if(v.empty()){
                    return false;
                }
                int n = v.size();
                if(v[n-1]!='{'){
                    return false;
                }
                else{
                    v.pop_back();
                }
            }
            if(s[i]==']'){
                if(v.empty()){
                    return false;
                }
                int n = v.size();
                if(v[n-1]!='['){
                    return false;
                }
                else{
                    v.pop_back();
                }
            }
        }   
        if(!v.empty()){
            return false;
        }     
        return true;
    }
};