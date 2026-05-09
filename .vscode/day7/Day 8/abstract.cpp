#include<iostream>
using namespace std;
class ATM
{
    private:
    int balance;
    public:
    ATM(int balance)
    {
        this->balance=balance;
    }
    void withdraw(int amount)
    {
        if (amount>balance)
        {
            cout<<"Insufficient balance"<<endl;
        }
        else
        {
            balance-=amount;
            cout<<"Withdrawal successful of:"<<amount<<endl;
        }
    } void show()
    {
cout<<"Current Balance:"<<balance<<endl;

    }
};
int main()
{
    ATM a(5000);
    a.show();
    a.withdraw(2000);
    a.show();
    return 0;
}