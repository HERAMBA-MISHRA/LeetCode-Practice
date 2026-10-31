class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>v;
        int n = boxes.size();
        for(int i = 0; i<n; i++){
            
            int sum = 0;
            for(int j = 0; j<n; j++){
                if(boxes[j]=='1'){
                    sum+=abs(i-j);
                }
            }
            v.push_back(sum);
        }
        return v;
    }
};