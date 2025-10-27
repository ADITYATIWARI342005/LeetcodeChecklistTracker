class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        if(bank.size()<2) return 0;
        vector<int>temp;
        int res=0;
        for(int i=0;i<bank.size();i++){
            int pre=0;
            for(int j=0;j<bank[0].size();j++){
                if(bank[i][j]=='1'){
                    pre++;
                }
            }
            if(pre!=0)temp.push_back(pre);
        }
        for(int i=1;i<temp.size();i++){
            res+=temp[i]*temp[i-1];
        } 
        return res;
    }
};