class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> freq(51, 0 );
        vector<int> ans( n-k+1, 0 );
        //different treatment for first subarray
        for( int i = 0;i<k;i++)
            freq[nums[i]]++;
        priority_queue<pair<int,int>> pq;
        for(int i = 0;i<=50;i++)
        {
            if( freq[i] > 0 )
                pq.push( pair<int,int>(freq[i], i ) );
        }
        pair<int,int> tmp;
        int sm = 0;
        for( int i = 0 ;i<x && pq.size();i++)
        {
            tmp = pq.top();
            pq.pop();
            sm += tmp.first*tmp.second;
        }
        ans[0] = sm;
        //second subarray onwards
        for( int i = 1; i<n-k+1;i++)
        {
            freq[nums[i-1]]--;
            freq[nums[k+i-1]]++;
            priority_queue<pair<int,int>> pqn;
            for(int i = 0;i<=50;i++)
            {
                if( freq[i] > 0 )
                    pqn.push( pair<int,int>(freq[i], i ) );
            }
            pair<int,int> tmp;
            int sm = 0;
            for( int i = 0 ;i<x && pqn.size();i++)
            {
                tmp = pqn.top();
                pqn.pop();
                sm += tmp.first*tmp.second;
            }
            ans[i] = sm;           
        }
        return ans;
    }
};