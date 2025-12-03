#include <iostream>
using namespace std;

// creating class of name Bank
class Bank
{   
    int Balance;
    public:
    int Choice;
    Bank() {Balance = 10000;} //had intial balance of 10000
    void getdata(void);
};

// function for run loop and bank menu 
void Bank ::getdata(void)
{
    while (true)
    {
// int Balance = 10000;
        cout << "Enter Your Choice " << endl;
        cout << "1-Check Balance" << endl
             << "2-Deposit" << endl
             << "3-Withdraw" << endl
             << "4-Exit" << endl;
        cin >> Choice;
// for balance
        if (Choice == 1)
        {
            cout << Balance << endl;
        }

// for Deposite
        else if (Choice == 2)
        {
            int amount;
            cout << "Enter The Amount: ";
            cin >> amount;
            Balance = Balance + amount;
            cout << "Your New Balance: " << Balance << endl;
            
        }

// for Withdraw
        else if (Choice == 3)
        {
            int amount;
            cout << "Enter The Amount: ";
            cin >> amount;
            if (amount==0)
            {
                cout<<"Please Enter A Specific Amount: "<<endl;
                continue;
            }
            else if (Balance >= amount)
            {
                Balance = Balance - amount;
                cout << "Your New Balance: " << Balance << endl;
            }
            
            
            else
            {
                cout << "Insufficient Balance: " << endl;
                continue;
            }
        }

// for exiting..
        else if (Choice == 4)
        {
            cout << "Thanks For Using This Bank" << endl
                 << "Exiting..." << endl;
            break;
        }
        else
        {
            cout<<"Enter Valid Number: "<<endl;           
        }        
    }
}
// running driver program
int main()
{
    Bank devraj;
    devraj.getdata();
    return 0;
}