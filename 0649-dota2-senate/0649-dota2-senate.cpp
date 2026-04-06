class Solution {
public:
    string predictPartyVictory(string senate) {
        unordered_map<char,int> mpp;
        for(char c : senate) mpp[c]++;
        if(mpp['R']!=mpp['D']){
            if(mpp['R']>mpp['D']) return "Radiant";
            else return "Dire";
        }
        for(int i =0;i<senate.size();i++){
            mpp['R']--;
            mpp['D']--;
            if(mpp['R']==0 || mpp['D']==0){
                if(mpp['R']==0) return "Radiant";
                else return "Dire";
            }
        }
        return "Radiant";

    }
};