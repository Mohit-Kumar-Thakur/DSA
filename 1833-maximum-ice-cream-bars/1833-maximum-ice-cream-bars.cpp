class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int maxCost = 0;
        for(int cost : costs){
            maxCost = max(maxCost,cost);
        }
        vector<int> freq(maxCost + 1, 0);

        for(int cost : costs){
            freq[cost]++;
        }
        int bars = 0;
        for(int cost =1; cost<= maxCost && coins>=cost;cost++){
            if(freq[cost] == 0) continue;
            int canBuy = min(freq[cost],coins/cost);
            bars += canBuy;
            coins -= canBuy*cost;
        }
        return bars;
    }
};