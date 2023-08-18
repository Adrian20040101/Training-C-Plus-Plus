#include <iostream>
#include <ctime>

void drawBoard(char *spaces)
{
    std::cout<<"                                "<<"***********************TIC TAC TOE***********************\n\n\n";
    std::cout<<"                                                  "<<"      |      |\n";
    std::cout<<"                                                  "<<"  "<<spaces[0]<<"   |  "<<spaces[1]<<"   |  "<<spaces[2]<<'\n';
    std::cout<<"                                                  "<<"______|______|______\n";
    std::cout<<"                                                  "<<"      |      |\n";
    std::cout<<"                                                  "<<"  "<<spaces[3]<<"   |  "<<spaces[4]<<"   |  "<<spaces[5]<<'\n';
    std::cout<<"                                                  "<<"______|______|______\n";
    std::cout<<"                                                  "<<"      |      |\n";
    std::cout<<"                                                  "<<"  "<<spaces[6]<<"   |  "<<spaces[7]<<"   |  "<<spaces[8]<<'\n';
    std::cout<<"                                                  "<<"      |      |\n\n\n";
}

void userInput(char *spaces, char player)
{
    int number;
    do
    {
        std::cout<<"Enter a number representing the field you'd like to mark (1-9): ";
        std::cin>>number;
        number--;
    }while(number < 0 || number > 9 && spaces[number] != ' ');
    while (spaces[number] != ' ')
    {
        std::cout<<"Field is occupied! Enter a number representing the field you'd like to mark (1-9): ";
        std::cin>>number;
        number--;
    }
    if (spaces[number] == ' ')
    {
        spaces[number] = player;
        system("cls");
        drawBoard(spaces);
    }
}

void computerInput(char *spaces, char computer)
{
    int number;
    srand(time(0));
    number = rand()%9;
    while (spaces[number] != ' ')
    {
        number = rand()%9;
    }
    if (spaces[number] == ' ')
    {
        spaces[number] = computer;
        system("cls");
        drawBoard(spaces);
    }
}

bool checkForWin(char *spaces, char player, char computer)
{
    if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2])
    {
        spaces[0] == player ? std::cout<<"                                                        "<<"YOU WON!\n" : std::cout<<"                                                       "<<"YOU LOST!\n";
    }
    else if(spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5])
    {
        spaces[3] == player ? std::cout<<"                                                        "<<"YOU WON!\n" : std::cout<<"                                                       "<<"YOU LOST!\n";
    }
    else if(spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8])
    {
        spaces[6] == player ? std::cout<<"                                                        "<<"YOU WON!\n" : std::cout<<"                                                       "<<"YOU LOST!\n";
    }
    else if(spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6])
    {
        spaces[0] == player ? std::cout<<"                                                        "<<"YOU WON!\n" : std::cout<<"                                                       "<<"YOU LOST!\n";
    }
    else if(spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7])
    {
        spaces[1] == player ? std::cout<<"                                                        "<<"YOU WON!\n" : std::cout<<"                                                       "<<"YOU LOST!\n";
    }
    else if(spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8])
    {
        spaces[2] == player ? std::cout<<"                                                        "<<"YOU WON!\n" : std::cout<<"                                                       "<<"YOU LOST!\n";
    }
    else if(spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8])
    {
        spaces[0] == player ? std::cout<<"                                                        "<<"YOU WON!\n" : std::cout<<"                                                       "<<"YOU LOST!\n";
    }
    else if(spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6])
    {
        spaces[2] == player ? std::cout<<"                                                        "<<"YOU WON!\n" : std::cout<<"                                                       "<<"YOU LOST!\n";
    }
    else
    {
        return false;
    }
    return true;
}

bool checkForTie(char *spaces)
{
    for (int i = 0; i < 9; i++)
    {
        if(spaces[i] == ' ')
        {
            return false;
        }
    }
    std::cout<<"                                                       "<<"IT'S A TIE\n";
    return true;
}
/**
int main()
{
    bool running = true;
    char player = 'X';
    char computer = 'O';
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    drawBoard(spaces);
    while (running)
    {
        userInput(spaces, player);
        if(checkForWin(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if(checkForTie(spaces))
        {
            running == false;
            break;
        }

        computerInput(spaces, computer);
        if(checkForWin(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if(checkForTie(spaces))
        {
            running == false;
            break;
        }
    }
}
**/
