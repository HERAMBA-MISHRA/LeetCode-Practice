class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = INT_MIN;
        for(int i = 0; i<sentences.size(); i++){
            int cnt = 00;
            for(int j = 0; j<sentences[i].size(); j++){
                if(sentences[i][j] == ' '){
                    cnt++;
                }
            }
            cnt ++;
            if(max<cnt){
                max = cnt;
            }
        }
        return max;
    }
};