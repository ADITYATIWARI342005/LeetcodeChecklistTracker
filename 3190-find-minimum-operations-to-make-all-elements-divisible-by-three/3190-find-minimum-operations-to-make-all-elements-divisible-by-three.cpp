class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int tadd=nums[i]%3;
            if(tadd==2) tadd=1;
            ans+=tadd;
        }
        return ans;
    }
};