class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        vector<int> res(s.size());
        for(int i = 0; i<s.size(); i++){
            int r = startPos[0];
            int c = startPos[1];
            int count = 0;
            for(int j=i;j < s.size();j++){
                if(s[j]=='L'){
                    c--;
                }
                else if(s[j]=='R'){
                    c++;
                }
                else if(s[j]=='D'){
                    r++;
                }
                else{
                    r--;
                }
                if (r < 0 || r >= n || c < 0 || c >= n) break;
                count++;
            }
            res[i]=count;
        }
        return res;
    }
};