class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> mpp;
        for(int num : nums) mpp[num]++;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minheap;

        for(auto& pair: mpp){
            int num = pair.first;
            int count = pair.second;
            minheap.push({count,num});
            if(minheap.size()>k)
                minheap.pop();
        }
        vector<int> result;
        while(!minheap.empty()){
            result.push_back(minheap.top().second);
            minheap.pop();
        }
        return result;
    }
};