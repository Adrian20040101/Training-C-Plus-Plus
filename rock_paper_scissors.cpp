#include <iostream>
#include <ctime>

char getPlayerChoice()
{
    char player_choice;
    std::cout<<"*********ROCK PAPER SCISSORS*********\n";
    do
    {
        std::cout<<"Choose one of the following:\n";
        std::cout<<"'r' for rock:\n";
        std::cout<<"'p' for paper:\n";
        std::cout<<"'s' for scissors:\n";
        std::cin>>player_choice;
    }while(player_choice != 'r' && player_choice != 'p' && player_choice != 's');
}

char getComputerChoice()
{
    srand(time(0));
    int num = rand()%3 + 1;
    switch(num)
    {
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
}

char showChoice(char choice)
{
    switch(choice)
        {
            case 'r': std::cout<<"rock\n";
                      break;
            case 'p': std::cout<<"paper\n";
                      break;
            case 's': std::cout<<"scissors\n";
                      break;
        }
}

void chooseWinner(char player_choice, char computer_choice)
{
    switch(player_choice)
    {
        case 'r': if (computer_choice == 's')
                    {
                        std::cout<<"You won!\n";
                    }
                  else if (computer_choice == 'p')
                    {
                        std::cout<<"You lost!\n";
                    }
                  else
                    {
                        std::cout<<"It's a tie!\n";
                    }
                    break;
        case 'p': if (computer_choice == 'r')
                    {
                        std::cout<<"You won!\n";
                    }
                  else if (computer_choice == 's')
                    {
                        std::cout<<"You lost!\n";
                    }
                  else
                    {
                        std::cout<<"It's a tie!\n";
                    }
                    break;
        case 's': if (computer_choice == 'p')
                    {
                        std::cout<<"You won!\n";
                    }
                  else if (computer_choice == 'r')
                    {
                        std::cout<<"You lost!\n";
                    }
                  else
                    {
                        std::cout<<"It's a tie!\n";
                    }
                    break;
    }
}
/**
void UI()
{
    char player_choice;
    char computer_choice;

    player_choice = getPlayerChoice();
    computer_choice = getComputerChoice();

    std::cout<<"You chose ";
    showChoice(player_choice);

    std::cout<<"Computer chose ";
    showChoice(computer_choice);

    getComputerChoice();
    chooseWinner(player_choice, computer_choice);
}
int main()
{
    UI();
    return 0;
}
**/
