#include <iostream>
#include <iomanip>

double showBalance(double balance)
{
    std::cout<<"Your current balance is: $"<<std::setprecision(2)<<std::fixed<< balance <<std::endl;
}

double depositMoney(double balance)
{
    double amount = 0;
    std::cout<<"Enter an amount of money that you'd like to deposit: $";
    std::cin>>amount;
    if (amount > 0)
    {
        return amount;
    }
    std::cout<<"You can't deposit anything below 0$"<<std::endl;
}

double withdrawMoney(double balance)
{
    double amount = 0;
    std::cout<<"Enter an amount of money that you'd like to withdraw: $";
    std::cin>>amount;
    if (amount <= balance && amount > 0)
    {
        return amount;
    }
    else if (amount > balance)
    {
        std::cout<<"Insufficient funds for the transaction to be possible!"<<std::endl;
    }
    else if (amount <= 0)
    {
        std::cout<<"You can't withdraw anything below 0$"<<std::endl;
    }
}

void UI()
{
    double balance = 0;
    int choice = 0;
    do
    {
        std::cout<<"*******BANKING SYSTEM*******"<<std::endl;
        std::cout<<"1. Show Balance"<<std::endl;
        std::cout<<"2. Deposit Money"<<std::endl;
        std::cout<<"3. Withdraw Money"<<std::endl;
        std::cout<<"4. Exit"<<std::endl;
        std::cout<<"Enter your choice: ";
        std::cin>>choice;
        system("cls");
        switch(choice)
        {
            case 1: showBalance(balance);
                    break;
            case 2: balance += depositMoney(balance);
                    showBalance(balance);
                    break;
            case 3: balance -= withdrawMoney(balance);
                    showBalance(balance);
                    break;
            case 4: std::cout<<"Thank you for visiting!\n";
                    break;
            default:std::cout<<"You have entered an onvalid option!\n";
        }
    }while(choice != 4);
}
/**
int main()
{
    UI();
    return 0;
}
**/
