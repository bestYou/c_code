#include <iostream>

using namespace std;

class Account{
public:
    Account(int first_user_balance ){
        if(first_user_balance >= 0 ){
            account_balance = first_user_balance;
        }
        else{
            account_balance = 0;
            cout << "Error! Invalid initial balance value " << endl;
        }
    }
    void credit(int add_num){       // add
        if(add_num >= 0){
            account_balance += add_num;
        }
    }
    void debit(int reduce_num){        // reduce
        if(reduce_num >= 0  &&  reduce_num <=account_balance){
            account_balance -= reduce_num;
        }
        else{
            cout << " The number of withdrawals exceeds the balance!" << endl;
        }
    }
    int getBalance(){   // account banlance
        return account_balance;
    }

private:
    int account_balance;

};

int main()
{
    Account account(2000);
    cout << "Account balance1 is " << account.getBalance() << endl;

    Account account2(10);
    cout << "Account balance2 is " << account2.getBalance() << "\n" << endl;

    cout << "Add money ,num is 1000" << endl;
    account.credit(1000);
    cout << "Account balance1 is " << account.getBalance() << "\n" << endl;

    cout << "Reduce money ,num is 100" << endl;
    account.debit(100);
    cout << "Account balance1 is " << account.getBalance() << "\n" << endl;


    //cout << "Hello world!" << endl;
    return 0;
}
