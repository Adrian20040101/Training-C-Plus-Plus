#include <iostream>
#include <cmath>

float addition(float num1, float num2)
{
    return num1 + num2;
}

float subtraction(float num1, float num2)
{
    return num1 - num2;
}

float multiplication(float num1, float num2)
{
    return num1 * num2;
}

float division(float num1, float num2)
{
    return num1 / num2;
}

float factorial(float num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

float power(float num1, float num2)
{
    return pow(num1, num2);
}

float square_root(float num)
{
    return sqrt(num);
}

float absolute_value(float num)
{
    return abs(num);
}
/*
int main()
{
    std::cout<<"*********************** CALCULATOR ***********************\n";
    float number1;
    float number2;
    char op;
    std::cout<<"Enter #1: ";
    std::cin>>number1;
    std::cout<<"Enter the the operator (+ - * / ! ^ s(sqrt) a(abs)): ";
    std::cin>>op;
    if (op != '!' && op != 's' && op != 'a')
    {
        std::cout<<"Enter #2: ";
        std::cin>>number2;
    }


    switch(op)
    {
        case '+' :
            std::cout<<"Result is "<<addition(number1, number2)<<"\n";
            break;
        case '-':
            std::cout<<"Result is "<<subtraction(number1, number2)<<"\n";
            break;
        case '*':
            std::cout<<"Result is "<<multiplication(number1, number2)<<"\n";
            break;
        case '/':
            std::cout<<"Result is "<<division(number1, number2)<<"\n";
            break;
        case '!':
            std::cout<<"Result is "<<factorial(number1)<<"\n";
            break;
        case '^':
            std::cout<<"Result is "<<power(number1, number2)<<"\n";
            break;
        case 's':
            std::cout<<"Result is "<<square_root(number1)<<"\n";
            break;
        case 'a':
            std::cout<<"Result is "<<absolute_value(number1)<<"\n";
            break;
        default:
            std::cout<<"You have entered an invalid operator! \n";
    }
    std::cout<<"**********************************************";
    return 0;
}
*/
