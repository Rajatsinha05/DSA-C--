#include <iostream>
using namespace std;

class Bank
{
private:
    string name;
    int accoun_No;
    int balance;

public:
    Bank(string name, int accoun_No, int balance)
    {
        this->name = name;
        this->accoun_No = accoun_No;
        this->balance = balance;
    }
    void check_balance()
    {
        cout << balance << endl;
    }
    void deposit(int amount)
    {
        this->balance += amount;
    }

    void withdraw(int amount)
    {
        if (canWithdraw(amount))
        {
            this->balance -= amount;
            cout << "withdrawal" << endl;
        }
        else
        {
            cout << "can't withdraw" << endl;
        }
    }

private:
    bool canWithdraw(int amount)
    {
        if (this->balance >= amount)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

main()
{

    Bank bank("harsh", 4353465, 10000);
    bank.check_balance();
    bank.deposit(1000);
    bank.withdraw(43565467);
    bank.check_balance();
    return 0;
}