class Solution {
public:
    string truncateSentence(string s, int k) {
        string res = "";
        int cnt = 0;
        int i = 0;
        while(i<s.size()){
            if(s[i]==' '){
                cnt++;
                if(cnt == k) return res;
            }
            res+=s[i];
            i++;
        }
        return res;
    }
};