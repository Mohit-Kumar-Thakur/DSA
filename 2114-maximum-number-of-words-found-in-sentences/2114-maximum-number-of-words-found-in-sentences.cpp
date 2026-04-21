class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int mx = 0;
        for(auto &sentence : sentences){
            int count =1;
            for(int i = 0; i<sentence.size();i++){
                if(sentence[i] == ' ' ) count++;
            }
            mx = max(mx,count);
        }
        return mx;
    }
};