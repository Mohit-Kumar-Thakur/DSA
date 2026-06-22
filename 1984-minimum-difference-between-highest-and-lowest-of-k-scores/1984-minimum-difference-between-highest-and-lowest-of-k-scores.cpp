class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(k==1) return 0;
        sort(nums.begin(), nums.end());
        int diff = INT_MAX;
        for(int l=0,r=k-1;r<nums.size();r++,l++){
            diff = min(diff,nums[r]-nums[l]);
        }
        return diff;
    }
};