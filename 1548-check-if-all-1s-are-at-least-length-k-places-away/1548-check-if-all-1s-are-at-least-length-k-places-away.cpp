class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int pre=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                if(pre==-1){
                    pre=i;
                    continue;
                }else{
                    int len=i-pre-1;
                    if(len>=k){
                        pre=i;
                        continue;
                    }else{
                        // cout<<i<<" "<<len<<" "<<pre<<endl;
                        return false;
                    }
                }
            }
        }
        return true;
    }
};