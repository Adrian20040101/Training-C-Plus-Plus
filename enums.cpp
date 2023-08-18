#include <iostream>
///enhances readability in the code and prevents errors when assigning strings instead of integers in the cases inside of switch
enum Color {red, blue, yellow, orange, brown, purple, white, black};
/**
int main()
{
    Color color = blue;
    switch(color)
    {
        case red : std::cout<<"You've chosen red";break;
        case blue : std::cout<<"You've chosen blue";break;
        case yellow : std::cout<<"You've chosen yellow";break;
        case orange : std::cout<<"You've chosen orange";break;
        case brown : std::cout<<"You've chosen brown";break;
        case purple : std::cout<<"You've chosen purple";break;
        case white : std::cout<<"You've chosen white";break;
        case black : std::cout<<"You've chosen black";break;
    }
    return 0;
}
**/
