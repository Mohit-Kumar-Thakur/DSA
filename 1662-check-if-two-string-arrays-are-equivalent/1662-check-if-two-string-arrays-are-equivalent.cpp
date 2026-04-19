class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string res1 = "";
        string res2 = "";
        for(string word : word1) res1+=word;
        for(string word : word2) res2+=word;
        if(res1==res2) return true;
        return false;
    }
};