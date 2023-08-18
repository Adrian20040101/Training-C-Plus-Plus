#include <iostream>
/**
int main()
{
    ///we declare a matrix
    std::string matrix[][3] = {{"Math", "Informatics", "Physics"},
                              {"Romanian", "English", "German"},
                              {"History", "Geography", "Psychology"}};

    int rows = sizeof(matrix)/sizeof(matrix[0]);
    int columns = sizeof(matrix[0])/sizeof(matrix[0][0]);

    ///we perform a simple example of an operation processed inside a matrix, which changes all subjects which begin with an 'R' with the subject "Chinese"
    for (int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            if(matrix[i][j][0] == 'R')
                matrix[i][j] = "Chinese";
        }
    }

    ///now let's display the above declared matrix
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            std::cout<<matrix[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

    return 0;
}
**/
