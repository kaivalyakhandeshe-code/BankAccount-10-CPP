
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Class template
template <class T>
class BankAccount
{
private:
    string accountHolder;
    int accountNumber;
    T balance;

public:
    BankAccount(string name, int number, T amount)
    {
        accountHolder = name;
        accountNumber = number;
        balance = amount;
    }

    void displayAccount()
    {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: Rs. " << balance << endl;
    }

    T getBalance()
    {
        return balance;
    }
};

// Function template
template <class T>
T calculateInterest(T principal, T rate, T years)
{
    return principal * rate * years / 100;
}

int main()
{
    cout << fixed << setprecision(2);

    // Class template with int
    BankAccount<int> account1("Sameer", 101, 10000);

    cout << "\n--- Integer Balance Account ---" << endl;
    account1.displayAccount();

    int interest1 = calculateInterest(10000, 5, 2);
    cout << "Interest Rate: 5%" << endl;
    cout << "Duration: 2 years" << endl;
    cout << "Calculated Interest: Rs. " << interest1 << endl;
    cout << "Total Amount: Rs. "
         << account1.getBalance() + interest1 << endl;

    // Class template with double
    BankAccount<double> account2("Asha", 102, 15000.50);

    cout << "\n--- Double Balance Account ---" << endl;
    account2.displayAccount();

    double interest2 = calculateInterest(15000.50, 4.0, 3.0);
    cout << "Interest Rate: 4%" << endl;
    cout << "Duration: 3 years" << endl;
    cout << "Calculated Interest: Rs. " << interest2 << endl;
    cout << "Total Amount: Rs. "
         << account2.getBalance() + interest2 << endl;

    // Class template with float
    BankAccount<float> account3("Rahul", 103, 8000.50f);

    cout << "\n--- Float Balance Account ---" << endl;
    account3.displayAccount();

    float interest3 = calculateInterest(8000.50f, 6.0f, 2.0f);
    cout << "Interest Rate: 6%" << endl;
    cout << "Duration: 2 years" << endl;
    cout << "Calculated Interest: Rs. " << interest3 << endl;
    cout << "Total Amount: Rs. "
         << account3.getBalance() + interest3 << endl;

    // Function template with double values
    BankAccount<double> account4("Priya", 104, 25000.75);

    cout << "\n--- Another Double Balance Account ---" << endl;
    account4.displayAccount();

    double interest4 = calculateInterest(25000.75, 7.5, 2.0);
    cout << "Interest Rate: 7.5%" << endl;
    cout << "Duration: 2 years" << endl;
    cout << "Calculated Interest: Rs. " << interest4 << endl;
    cout << "Total Amount: Rs. "
         << account4.getBalance() + interest4 << endl;

    return 0;
}

