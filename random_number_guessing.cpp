#include <iostream>
#include <ctime>
/**
int main()
{
    srand(time(0));
    int random_number = rand()%100 + 1;
    int guessed_number;
    int tries = 1;

    do
    {
        std::cout<<"Pick a number between 1-100: ";
        std::cin>> guessed_number;
        if (guessed_number > random_number)
        {
            std::cout<<"Too high\n";
            tries ++;
        }
        else if (guessed_number < random_number)
        {
            std::cout<<"Too low\n";
            tries ++;
        }
        else
        {
            std::cout<<"You have guessed the number! It took you "<<tries<<" tries\n";
        }
    }while(guessed_number != random_number);

    return 0;
}
**/
