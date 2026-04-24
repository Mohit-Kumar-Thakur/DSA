class Solution {
public:
    string toLowerCase(string s) {
        string res = "";
        for(char ch : s){
            if(ch>=65 && ch<=90){
                res += (char)(ch + 32);
            }
            else{
                res += ch;
            }
        }
        return res;
    }
};