class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int a_s = 0;
        int b_s = 0;
        for(char c : s){
            if(c == 'a') a_s++;
            else b_s++;
        }
        return abs(a_s-b_s);
    }
};