#include <iostream>
using namespace std;

class ATM {
private:
    int balance;
    public:
    void setdata(int balance){
        this->balance=balance;
    }

    void withdraw(int amount) {
        if (amount > balance) {
            cout << "Insufficient balance" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal successful of:" << amount << endl;
        }
    }

    int getdata() {
        return balance;
    }
};

int main() {
    ATM a;
    a.setdata(5000);
    cout << "Initial Balance: " << a.getdata() << endl;
    a.withdraw(2000);
    cout << "Balance after withdrawal: " << a.getdata() << endl;
    return 0;
}






