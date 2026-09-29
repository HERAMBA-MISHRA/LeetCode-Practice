class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size()<26){
            return false;
        }
        set<char> s;
        for(char c : sentence) {
            s.insert(c);
        }
        return s.size() == 26;
    }
};