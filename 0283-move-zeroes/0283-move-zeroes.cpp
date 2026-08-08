class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0; 
        int j = 0;
        if(nums.size()<=1) return;
        while(j<=nums.size()-1){
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else j++;
        }
    }
};