class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        for(int i=0;i<bits.size();i++){
            if(i==bits.size()-1 && bits[i]==0) return true;
            if(i<bits.size()-1){
                if((bits[i]==1 && bits[i+1]==1) || (bits[i]==1 && bits[i+1]==0)){
                    i=i+1;
                    continue;
                }
            }
        }
        return false;
    }
};