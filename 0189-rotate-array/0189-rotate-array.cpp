class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        if(k%nums.size()==0) return;
        reverse(nums.begin(), nums.begin()+nums.size()-k);
        reverse(nums.begin()+nums.size()-k,nums.end());
        reverse(nums.begin(),nums.end());
    }
};