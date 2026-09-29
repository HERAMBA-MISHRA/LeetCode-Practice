class Solution {
public:
    int countKeyChanges(string s) {
        int key = 00;
        for(int i = 1; i<s.size(); i++){
            if(s[i]-s[i-1] != 0 && s[i]-s[i-1] != 32 && s[i]-s[i-1] != -32){
                key++;
            }
        }
        return key;
    }
};