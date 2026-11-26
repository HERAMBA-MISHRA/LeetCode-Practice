class Solution {
public:
    bool canAliceWin(int n) {
        int turn = 0, i = 10; 
        while((n-i)>=0){
            n = n-i;
            turn++;
            i--;
        }
        if(turn%2 == 0){
            return false;
        }
        return true;
    }
};