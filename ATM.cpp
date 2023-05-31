#include <iostream>
using namespace std;

    /* PASSWORD FOR Mohaned IS 5555" 
      PASSWORD FOR Ziad    IS 6666 "
      PASSWORD FOR Hamada  IS 7777 "
      PASSWORD FOR Ahmed   IS 8888 " */










void printstar(char ch, int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << ch;
    }
    cout << "\n";
}

double balance1;

int main()
{

    cout << "\n\t\t    =========================================" << endl;
    cout << "\t\t    =========================================" << endl;
    cout << "\t\t      ||   WELCOME TO MY PROJECT   ||" << endl;
    cout << "\t\t    =========================================" << endl;
    cout << "\t\t    ========================================\n\n"
         << endl;
    printstar('*', 80);
    cout << "\n \n";
    int password;
    int pincode;
    

    
    printstar('*', 80);
    for (int i = 1; i <= 10; i++)
    {
        if (i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8 || i == 9 || i == 10)
        {
            cout << "\n\nWELCOME AGAIN  \n\t\t\t\tMAIN PAGE \n";
        }
        cout << "PLEASE ENTER THE PINCODE : \n";
        cin >> pincode;
        system("cls");
        if (pincode == 1111)
        {
            cout << "\n WELCOME Mohaned \n";
            for (int i = 0; i < 3; i++)
            {
                cout << "Enter password : \n";
                cin >> password;
                double balance = 10000;
                balance1 = balance;
                if (password == 5555)
                {
                    for (int i = 1; i <= 10; i++)
                    {
                        double withdraw, deposit;
                        int option;
                        cout << "\n";
                        if (i == 1)
                        {
                            cout << "\t\t *** Automated Teller Machine ***" << endl;
                            cout << "\nChoose a Transaction:\n\n";
                        }
                        printstar('%', 80);
                        cout << "     MAIN SCREEN    \n";
                        cout << "[1] Inquire Balance \n";
                        cout << "[2] Withdraw \n";
                        cout << "[3] Deposit \n";
                        cout << "[4] Quit \n";
                        cout << "\n";
                        cout << "Enter Option:";
                        cin >> option;
                        switch (option)
                        {
                        case 1:
                            cout << "\n[[[% BALANCE INQUIRY %]]]\n";
                            cout << "\n Your current balance is $ " << balance1 << endl;
                            continue;
                        case 2:
                            cout << "\n[[[% WITHDRAW %]]]\n";
                            cout << "Enter amount in $: ";
                            cin >> withdraw;
                            if (withdraw > balance1)
                            {
                                cout << "Error: You don't have enough balance to withdraw $ " << withdraw << endl;
                            }
                            else
                            {
                                balance1 -= withdraw;
                                cout << "You withdrew $: " << withdraw << endl;
                                cout << "Your remaining balance is $: " << balance1 << endl;
                            }
                            continue;

                        case 3:
                            cout << "\n[[[% DEPOSIT %]]]\n";
                            cout << "Enter amount in $: ";
                            cin >> deposit;
                            balance1 = balance1 + deposit;
                            cout << "You deposited $: " << deposit << endl;
                            cout << "Your new balance is $: " << balance1 << endl;
                            continue;
                        case 4:
                            cout << "\n***[[[% EXIT MODE %]]]***\n";
                            system("cls");
                            break;
                        default:
                            cout << "\n That is an invalid option Plz enter correct option :) \n";
                            continue;
                        }
                        break;
                    }
                    break;
                }
                else if (i == 2)
                {
                    cout << "\nCard is captured\n";
                }
                else
                    cout << "Pls try again!!!\n";
            }
        }
        if (pincode == 2222)
        {
            cout << "\n WELCOME Ziad \n";
            for (int i = 0; i < 3; i++)
            {
                cout << "Enter password : \n";
                cin >> password;
                double balance = 52000;
                balance1 = balance;
                if (password == 6666)
                {
                    for (int i = 1; i <= 10; i++)
                    {

                        double withdraw, deposit;
                        int option;
                        cout << "\n";
                        if (i == 1)
                        {

                            cout << "*** Automated Teller Machine***" << endl;
                            cout << "Choose a Transaction:\n";
                            cout << "\n";
                        }
                        cout << "     MAIN SCREEN    \n";
                        cout << "[1] Inquire Balance \n";
                        cout << "[2] Withdraw \n";
                        cout << "[3] Deposit \n";
                        cout << "[4] Quit \n";
                        cout << "\n";
                        cout << "Enter Option:";
                        cin >> option;

                        switch (option)
                        {
                        case 1:
                            cout << "\n[[[% BALANCE INQUIRY %]]]\n";
                            cout << "\n Your current balance is $: " << balance1 << endl;
                            continue;
                        case 2:
                            cout << "\n[[[% WITHDRAW %]]]\n";
                            cout << "Enter amount $: ";
                            cin >> withdraw;
                            if (withdraw > balance1)
                            {
                                cout << "Error: You don't have enough balance to withdraw $ " << withdraw << endl;
                            }
                            else
                            {
                                balance1 -= withdraw;
                                cout << "You withdrew $: " << withdraw << endl;
                                cout << "Your remaining balance is $: " << balance1 << endl;
                            }
                            continue;
                        case 3:
                            cout << "\n[[[% DEPOSIT %]]]\n";
                            cout << "Enter amount $: ";
                            cin >> deposit;
                            balance1 = balance1 + deposit;
                            cout << "You deposited $" << deposit << endl;
                            cout << "Your new balance is $: " << balance1 << endl;
                            continue;
                        case 4:
                            cout << "\n***[[[EXIT MODE]]]***\n";
                            break;
                        default:
                            cout << "\n That is an invalid option Plz enter correct option:\n";
                            continue;
                        }
                        break;
                    }
                    break;
                }
                if (i == 2)
                {
                    cout << "\nCard is captured\n";
                }
                else
                    cout << "Pls try again!!!\n";
            }
        }
        else if (pincode == 3333)
        {
            cout << "\n Wellcome Hamada \n";
            for (int i = 0; i < 3; i++)
            {
                cout << "Enter password : \n";
                cin >> password;
                double balance = 10000;
                balance1 = balance;
                if (password == 7777)
                {
                    for (int i = 1; i <= 10; i++)
                    {
                        double withdraw, deposit;
                        int option;
                        cout << "\n";
                        if (i == 1)
                        {
                            cout << "*** Automated Teller Machine***" << endl;
                            cout << "Choose a Transaction:\n";
                            cout << "\n";
                        }
                        cout << "     MAIN SCREEN    \n";
                        cout << "[1] Inquire Balance \n";
                        cout << "[2] Withdraw \n";
                        cout << "[3] Deposit \n";
                        cout << "[4] Quit \n";
                        cout << "\n";
                        cout << "Enter Option:";
                        cin >> option;
                        switch (option)
                        {
                        case 1:
                            cout << "\n[[[% BALANCE INQUIRY %]]]\n";
                            cout << "\n Your current balance is $: " << balance1 << endl;
                            continue;
                        case 2:
                            cout << "\n[[[% WITHDRAW %]]]\n";
                            cout << "Enter amount in $: ";
                            cin >> withdraw;
                            if (withdraw > balance1)
                            {
                                cout << "Error: You don't have enough balance to withdraw $ " << withdraw << endl;
                            }
                            else
                            {
                                balance1 -= withdraw;
                                cout << "You withdrew $: " << withdraw << endl;
                                cout << "Your remaining balance is $: " << balance1 << endl;
                            }
                            continue;
                        case 3:
                            cout << "\n[[[% DEPOSIT %]]]\n";
                            cout << "Enter amount $: ";
                            cin >> deposit;
                            balance1 = balance1 + deposit;
                            cout << "You deposited $: " << deposit << endl;
                            cout << "Your new balance is $: " << balance1 << endl;
                            continue;
                        case 4:
                            cout << "\n***[[[% EXIT MODE %]]]***\n";
                            break;
                        default:
                            cout << "\n That is an invalid option Plz enter corrct option: \n";
                            continue;
                        }
                        break;
                    }
                    break;
                }

                if (i == 2)
                {
                    cout << "\nCard is captured\n";
                }
                else
                    cout << "Pls try again!!!\n";
            }
        }
        else if (pincode == 4444)
        {
            cout << "\n WELCOME Ahmed \n";
            for (int i = 0; i < 3; i++)
            {
                cout << "Please enter password:\n";
                cin >> password;
                double balance = 10000;
                balance1 = balance;
                if (password == 8888)
                {
                    for (int i = 1; i <= 10; i++)
                    {
                        double withdraw, deposit;
                        int option;
                        cout << "\n";
                        if (i == 1)
                        {
                            cout << "*** Automated Teller Machine***" << endl;
                            cout << "Choose a Transaction:\n";
                            cout << "\n";
                        }
                        cout << "     MAIN SCREEN    \n";
                        cout << "[1] Inquire Balance \n";
                        cout << "[2] Withdraw \n";
                        cout << "[3] Deposit \n";
                        cout << "[4] Quit \n";
                        cout << "\n";
                        cout << "Enter Option:";
                        cin >> option;
                        switch (option)
                        {
                        case 1:
                            cout << "\n[[[% BALANCE INQUIRY %]]]\n";
                            cout << "\n Your current balance is " << balance1 << endl;
                            continue;
                        case 2:
                            cout << "\n[[[% WITHDRAW %]]]\n";
                            cout << "Enter amount in $: ";
                            cin >> withdraw;
                            if (withdraw > balance1)
                            {
                                cout << "Error: You don't have enough balance to withdraw $ " << withdraw << endl;
                            }
                            else
                            {
                                balance1 -= withdraw;
                                cout << "You withdrew $: " << withdraw << endl;
                                cout << "Your remaining balance is $: " << balance1 << endl;
                            }
                            continue;
                        case 3:
                            cout << "\n[[[% DEPOSIT %]]]\n";
                            cout << "Enter amount in $: ";
                            cin >> deposit;
                            balance1 = balance1 + deposit;
                            cout << "You deposited $: " << deposit << endl;
                            cout << "Your new balance is $: " << balance1 << endl;
                            continue;
                        case 4:
                            cout << "\n***[[[EXIT MODE]]]***\n";
                            break;
                        default:
                            cout << "\n That is an invalid option Plz enter correct option:   \n";
                            continue;
                        }
                        break;
                    }
                    break;
                }
                if (i == 2)
                {
                    cout << "\nCard is captured\n";
                }
                else
                    cout << "Pls try again!!!\n";
            }
        }
    }
    return 0;
}
