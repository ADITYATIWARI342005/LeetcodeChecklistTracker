class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        // vector<pair<int,int>>v(50);
        vector<int>res;
        unordered_map<int,int>mpp;
        for(int i=0;i<k;i++){
            mpp[nums[i]]++;
        }
        auto cmp = [](pair<int, int>& a, pair<int, int>& b) {
            if (a.second != b.second) {
                return a.second < b.second; 
            }
            return a.first < b.first; 
        };
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> pq(cmp);
        for(auto a:mpp){
            pq.push({a.first,a.second});
        }
        int temp=0;
        for(int j=0;j<x && pq.size()>0;j++){
            cout<<pq.top().first<<" "<<pq.top().second<<endl;
            temp+=pq.top().first*pq.top().second;
            pq.pop();
        }
        res.push_back(temp);
        for(int i=k;i<nums.size();i++){
            mpp[nums[i-k]]--;
            mpp[nums[i]]++;
            auto cmp = [](pair<int, int>& a, pair<int, int>& b) {
                if (a.second != b.second) {
                    return a.second < b.second; 
                }
                return a.first < b.first; 
            };
            priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> p(cmp);
            for(auto a:mpp){
                p.push({a.first,a.second});
            }
            int t=0;
            for(int j=0;j<x && p.size()>0;j++){
                t+=p.top().first*p.top().second;
                p.pop();
            }
            res.push_back(t);    
        }
        return res;
    }
};