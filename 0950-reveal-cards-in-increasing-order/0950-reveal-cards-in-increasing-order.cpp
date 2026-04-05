class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        int n = deck.size();
        queue<int> q;
        for(int i = 0;i<n;i++) q.push(i);
        vector<int> res(n);
        for(int i =0;i<n;i++){
            int idx = q.front();
            q.pop();
            res[idx] = deck[i];
            if(!q.empty()){
                q.push(q.front());
                q.pop();
            }
        }
        return res;
    }
};