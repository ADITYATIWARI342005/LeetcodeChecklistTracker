class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0, cnt = 1; i < n - 2; i++) {
            while(nums[i] != i) {
                if(nums[i] == nums[nums[i]]) {
                    swap(nums[nums[i]], nums[n-cnt]);
                    cnt++;
                }
                swap(nums[i], nums[nums[i]]);
            }
        }
        return {nums[n-1],nums[n-2]};
        
    }
};
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
static int x = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();
