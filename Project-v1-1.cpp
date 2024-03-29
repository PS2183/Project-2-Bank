#include <iostream>
using namespace std;

// define all veriables in bank class
// define all function related to account in baml class
// define request funtion and pending request function in each reaspective class

class bank
{
protected:
    /* data */

public:
    void bankMenu();

    void addAccount();
    void removeAccount();

    void depositMoney();
    void withdrawMoney();

    void card();
    void applyCard();
    void closeCard();

    void fixedDiposit();

    void applyPassbook();

    void applyCheckbook();

    void loan();
    void goldLone();
    void studentLoan();
    void personalLoan();
};

class manager : public bank
{
protected:
    /* data */
public:
    void managerMenu();

    void manager_login();

    void Pending_manager_request();
};

class cashier : public manager
{
protected:
    /* data */
public:
    void cashierMenu();

    void cashier_login();
    void cashier_request();
    void Pending_cashier_request();
};

class customer : public cashier
{
protected:
    /* data */
public:
    void customerMenu();

    void customer_login();
    void intrest();
    void loan_calculate();

    void customer_request();
    void Pending_customer_request();
};

int main()
{
    bank B;
    B.bankMenu();

    return 0;
}


// 0.Bank
void bank::bankMenu()
{
    int opt;
    while (1)
    {
        customer C;
        cout << "Welcome" << endl
             << "Hemant Yadav Pvt. Bank" << endl
             << "Choose the entity" << endl
             << "1.Manager" << endl
             << "2.Cashier" << endl
             << "3.Customer" << endl
             << "3.Exit" << endl
             << "Choose option = ";
        cin >> opt;
        if (opt == 4)
        {
            break;
        }
        switch (opt)
        {
        case 1:
            C.managerMenu();
            break;

        case 2:
            C.cashierMenu();
            break;

        case 3:
            C.customerMenu();
            break;

        default:
            break;
        }
    }
}
// 1.Manager 
void manager::managerMenu()
{
    cout << "Hello Manager" << endl;
}

// 2.Cashier
void cashier::cashierMenu()
{
    cout << "Hello cashier" << endl;
}

// 3.Customer
void customer::customerMenu()
{
    int opt;
    while (1)
    {
        customer C;
        cout << "Hello customer." << endl
             << "Options = " << endl
             << "1.Log in to acount." << endl
             << "2.Create new bank account." << endl
             << "3.Calculate intrest." << endl
             << "4.Calculate loan." << endl
             << "5.Exit. " << endl
             << "Choose option = ";

        cin >> opt;
        if (opt == 5)
        {
            break;
        }
        switch (opt)
        {
        case 1:
            C.customer_login();
            break;

        case 2:
            C.addAccount();
            break;

        case 3:
            C.intrest();
            break;

        case 4:
            C.loan_calculate();

        default:
            break;
        }
    }
}

// Customer class functions
