#include <iostream>

void spacing()
{
    std::cout<<"                                 ";
}

void spacing2()
{
    std::cout<<"          ";
}
/**
int main()
{
    std::string questions[] = {"1. What is the capital city of Albania?",
                               "2. What is the capital city of South Africa?",
                               "3. What is the capital city of Mongolia?",
                               "4. What is the capital city of Wales?",
                               "5. What is the capital city of Colombia?",
                               "6. What is the capital city of Cyprus?",
                               "7. What is the capital city of Malta?",
                               "8. What is the capital city of Slovakia?",
                               "9. What is the capital city of Norway?",
                               "10. What is the capital city of Estonia?"};

    std::string options[][10] = {{"A. Skopje", "B. Zagreb", "C. Tirana", "D. Bratislava"},
                               {"A. Johannesburg", "B. Antananarivo", "C. Gaborone", "D. Nairobi"},
                               {"A. Kuwait", "B. Sana'a", "C. Nairobi", "D. Ulaanbaatar"},
                               {"A. Sheffield", "B. Edinburgh", "C. Birmingham", "D. Cardiff"},
                               {"A. Bogota", "B. Caracas", "C. Quito", "D. Montevideo"},
                               {"A. Athens", "B. Vaduz", "C. Nicosia", "D. Valetta"},
                               {"A. Lisbon", "B. Valetta", "C. Birmingham", "D. Prague"},
                               {"A. Ljubljana", "B. Bratislava", "C. Belgrad", "D. Warsaw"},
                               {"A. Oslo", "B. Helsinki", "C. Stockholm", "D. Reykjavik"},
                               {"A. Riga", "B. Minsk", "C. Tallinn", "D. Vilnius"}};

    char answer_keys[] = {'C', 'A', 'D', 'D', 'A', 'C', 'B', 'B', 'A', 'C'};
    char guess;
    int score = 0;
    spacing();
    std::cout<<"**************** CAPITAL CITY QUIZ ****************\n\n\n";
    spacing2();
    std::cout<<"Your score is "<<score<<std::endl;
    std::cout<<std::endl;
    for(int i = 0; i < sizeof(questions)/sizeof(questions[0]); i++)
    {
        spacing2();
        std::cout<<questions[i]<< " ";
        std::cout<<std::endl;
        for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++)
        {
            spacing2();
            std::cout<<"   "<<options[i][j]<<" ";
            std::cout<<std::endl;
        }
        spacing2();
        std::cout<<"Enter your answer: ";
        std::cin>>guess;
        guess = toupper(guess);

        if (guess == answer_keys[i])
        {
            spacing2();
            std::cout<<"CORRECT!\n";
            score ++;
        }
        else
        {
            spacing2();
            std::cout<<"WRONG!\n";

        }
        spacing2();
        std::cout<<"Your score is "<<score<<std::endl;
        std::cout<<std::endl;
        system("cls");
        spacing();
        std::cout<<"**************** CAPITAL CITY QUIZ ****************\n\n\n";
        spacing2();
        std::cout<<"Your score is "<<score<<std::endl;
        std::cout<<std::endl;
    }

    system("cls");
    std::cout<<"Your final score is "<<score<<std::endl;
    std::cout<<"You got "<<(score/(double)(sizeof(questions)/sizeof(questions[0])))*100<<"% of the questions right!\n";
    if ((score/(double)(sizeof(questions)/sizeof(questions[0])))*100 == 100)
    {
        std::cout<<"Perfect!\n";
    }
    else if ((score/(double)(sizeof(questions)/sizeof(questions[0])))*100 > 75)
    {
        std::cout<<"You did very good!\n";
    }
    else if ((score/(double)(sizeof(questions)/sizeof(questions[0])))*100 >= 50)
    {
        std::cout<<"You did good enough!\n";
    }
    else if ((score/(double)(sizeof(questions)/sizeof(questions[0])))*100 < 25)
    {
        std::cout<<"You did awful!\n";
    }
    else if ((score/(double)(sizeof(questions)/sizeof(questions[0])))*100 < 50)
    {
        std::cout<<"You did pretty bad!\n";
    }

    return 0;
}
**/
