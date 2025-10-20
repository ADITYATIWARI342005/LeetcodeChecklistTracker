class Solution {
public:
    bool ch(string a){
        char x='+';
        char y='-';
        for(auto c:a){
            if(c==x){
                return true;
            }
            if(c==y){
                return false;
            }
        }
        return true;
    }
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(auto a:operations){
            if(ch(a)){
                x++;
            }else{
                x--;
            }
        }
        return x;
    }
};