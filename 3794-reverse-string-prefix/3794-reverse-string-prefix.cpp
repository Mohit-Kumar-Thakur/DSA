class Solution {
public:
    string reversePrefix(string s, int k) {
        reverse(s.begin(),s.end()-(s.size()-k));
        return s;
    }
};