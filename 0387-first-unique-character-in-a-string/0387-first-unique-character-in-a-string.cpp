class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<int, int>frqmp;
        for(int i : s){
            frqmp[i]++;
        }
        for(int i = 0; i<s.size(); i++){
            if(frqmp[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};