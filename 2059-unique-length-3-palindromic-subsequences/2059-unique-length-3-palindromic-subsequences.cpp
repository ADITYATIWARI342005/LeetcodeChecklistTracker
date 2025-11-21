class Solution {
public:
    int countPalindromicSubsequence(string s) {
        
        bitset<26> exist;
        int ans = 0;
        for(int i = 0; i < 26; i++){
            int l = s.find('a' + i);
            if(l != string::npos){
                int r = s.find_last_of('a' + i);
                if(r - l < 2) continue;
                for(int k = l + 1; k < r; k++){
                    exist.set(s[k] -'a');
                    if(exist.count() == 26) break;
                }
                ans += exist.count();
                exist.reset();
            }
        }
        return ans;
        
        
        // unordered_set<string>res;
        // int n=s.size();
        // vector<int>st(26,-1),end(26,-1);
        // for(int i=0;i<n;i++){
        //     if(st[s[i]-'a']==-1){
        //         st[s[i]-'a']=i;
        //     }
        //     end[s[i]-'a']=i;
        // }
        // for(int i=0;i<26;i++){
        //     if(st[i]!=-1 && end[i]!=-1 && st[i]<end[i]){
        //         unordered_set<char>mid;
        //         for(int j=st[i]+1;j<end[i];j++){
        //             mid.insert(s[j]);
        //         }
        //         for(auto c:mid){
        //             res.insert(string(1, 'a' + i) + c + string(1, 'a' + i));
        //         }
        //     }
        // }
        // return res.size();
    }
};