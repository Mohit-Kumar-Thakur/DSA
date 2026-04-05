class Solution {
public:
    int minOperations(vector<int>& nums) {
        int l =0;
        int r = 2;
        int cnt = 0;
        while(r< nums.size()){
            if(nums[l]==0){
                for(int i=l;i<=r;i++){
                    nums[i] = 1-nums[i];
                }
                cnt++;
            }
            l++;
            r++;
        }
        for(int n :nums){
            if(n==0) return -1;
        }
        return cnt;
    }
};