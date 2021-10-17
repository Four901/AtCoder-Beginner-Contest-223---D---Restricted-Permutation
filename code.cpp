class Bank {
public:
    vector<long long>bal;
    long long n;
    Bank(vector<long long>& balance)
    {
        this->bal=balance;
        this->n=balance.size();
    }
    
    bool transfer(int account1, int account2, long long money) 
    {
         if(account1>=1&&account1<=n&&account2>=1&&account2<=n)
        {
           if(bal[account1-1]>=money)
           {
               bal[account1-1]-=money;
               bal[account2-1]+=money;
               return true;
           }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    
    bool deposit(int account, long long money)
    {
        if(account>=1&&account<=n)
        {
            bal[account-1]+=money;
            return true;
        }
        else
        {
            return false;
        }
    }
    
    bool withdraw(int account, long long money) 
    {
        if(account>=1&&account<=n)
        {
           if(bal[account-1]>=money)
           {
               bal[account-1]-=money;
               return true;
           }
            else
            {
                return false;
            }
        }
        else
        {
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