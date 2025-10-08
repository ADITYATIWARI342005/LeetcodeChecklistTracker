class Solution {
public:
    int num(vector<int>&p, int x, long long s){
        int lo=0;
        int hi=p.size();
        int res=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(mid<p.size() && (long long)p[mid]*x>=s){
                res=mid;
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }
        if(res==-1) return 0;
        else{
            return p.size()-res;
        }
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int>res;
        for(auto x:spells){
            int temp=num(potions,x, success);
            res.push_back(temp);
        }
        return res;
    }
};