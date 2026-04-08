class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int res =0;
        for(int i =0;i<nums.size()>>1;i++){
            res = max(res,nums[nums.size()-1-i] +nums[i]);
        }
        return res;
    }
};