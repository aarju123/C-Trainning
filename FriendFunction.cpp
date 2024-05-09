// Friend Function
//Cout<<obj;

//When we create our own vector than we know the power of vector

#include<iostream>

class BankAccount
{
    int balance;
    
     int getbalance() const
    {
        return this->balance;
    }


public:

    BankAccount(int balanceArg) :balance{ balanceArg }
    {

    }
    
   
    BankAccount operator+(const BankAccount& operandTwo) const
    {
        BankAccount newAccount{0};
        newAccount.balance = this->getbalance() + operandTwo.getbalance();
        return newAccount;
    }

// Frind function with operator overloading
    friend std::ostream& operator<<(std::ostream& out, const BankAccount& operandTwo)
    {
        out << "Current Balance is " << operandTwo.balance;
        return out;
    }

    ~BankAccount()
    {
        std::cout << "Destructor Called\n";
    }
};

int main()
{
    BankAccount acc1(1000);
    BankAccount acc2(2000);
    BankAccount acc3 = acc1 + acc2; // both objects must belong to the same class
    std::cout << acc3 << "\n";
    
    return 0;
}
