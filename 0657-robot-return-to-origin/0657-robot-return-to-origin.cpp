class Solution {
public:
    bool judgeCircle(string moves) {
        int h = 0, v = 0;
        for(int i = 0; i<moves.size(); i++){
            if(moves[i]=='U'){
                h++;
            }
            else if(moves[i]=='D'){
                h--;
            }
            else if(moves[i]=='L'){
                v++;
            }
            else{
                v--;
            }
        }
        if(h == 0 && v ==0){
            return true;
        }
        return false;
    }
};