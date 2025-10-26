class Bank {
public:
    vector<long long>temp;
    Bank(vector<long long>& balance) {
        temp.clear();
        temp=balance;
    }
    
    bool transfer(int account1, int account2, long long money) {
        if(account1-1<temp.size() && account2-1<temp.size() && temp[account1-1]>=money){
            temp[account1-1]-=money;
            temp[account2-1]+=money;
            return true;
        }else{
            return false;
        }
    }
    
    bool deposit(int account, long long money) {
        if(account-1<temp.size()) {
            temp[account-1]+=money;
            return true;
        }else return false;
    }
    
    bool withdraw(int account, long long money) {
        if(account-1<temp.size() && temp[account-1]>=money){
            temp[account-1]-=money;
            return true;
        }else{
            return false;
        }
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */