#include <iostream>
#include <cctype>
///this is also known as Luhn's Algorithm and it is used for generating real credit card numbers

int getDigit(const int number)
{
    return number % 10 + (number/10%10);
}

int sumEven(const std::string creditNumber)
{
    int sum = 0;
    for(int i = creditNumber.size() - 2; i >= 0; i -= 2)
    {
        if(isdigit(creditNumber[i] - '0'))
        {
            sum += getDigit((creditNumber[i] - '0') * 2);
        }
    }
    return sum;
}

int sumOdd(const std::string creditNumber)
{
    int sum = 0;
    for(int i = creditNumber.size() - 1; i >= 1; i -= 2)
    {
        if(isdigit(creditNumber[i] - '0'))
        {
            sum += getDigit((creditNumber[i] - '0'));
        }
    }
    return sum;
}
/**
int main()
{
    std::cout<<"************************************************ CREDIT CARD VALIDATION ************************************************\n";
    std::string creditNumber;
    std::cout<<"Enter you credit card number for validation: ";
    std::getline(std::cin, creditNumber);
    int result = sumEven(creditNumber) + sumOdd(creditNumber);
    if (result % 10 == 0)
    {
        std::cout<<creditNumber<<" is valid";
    }
    else
    {
        std::cout<<creditNumber<<" is not valid";
    }

    return 0;
}
**/
