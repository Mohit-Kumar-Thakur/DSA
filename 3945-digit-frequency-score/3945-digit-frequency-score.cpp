class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int, int> mpp;
        int x = n;
        int sum = 0;
        while(x!=0){
            mpp[x%10]++;
            x=x/10;
        }
        for(auto d : mpp){
            sum += d.first*d.second;
        }
        return sum;
    }
};