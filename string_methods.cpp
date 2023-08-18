#include <iostream>
///list of some string methods and their functionalities. In int main we have examples of how these methods may be implemented and an easy example of their use
///length method - returns an integer representing the lenght of a string, including any whitespaces
///empty method - returns if a string is empty or not, therefore returns a boolean value (True/False)
///append method - it adds a string that you specify at the end of a string that has been declared
///at method - it displays the character of the position that you specify
///insert method - inserts a character at a specified position in a specified string
///find method - searches for a specified character in a string and returns the position of the first appeareance of the searched character
///erase method - used to erase specified parts of a string
/**
int main()
{
    std::string name;
    std::cout<<"What's your name? Type it all lowercase and without any withespaces ";
    std::getline(std::cin, name);


    ///std::cout<<name.length()<<std::endl; returns the length of a given string, including any whitspaces

    if (name.length() > 20)              ///returns a set of instructions if the lenght condition is met
    {
        std::cout<<"Name is too long!\n";
    }
    else if (!name.empty())    ///it implies that name.empty() == false
    {
        std::cout<<"Welcome "<<name<<std::endl;
    }


    if (name.empty())   ///it implies that name.empty == true
    {
        std::cout<<"You haven't typed anything. Make sure to type your name!\n";
    }
    else
    {
        std::cout<<"You are good to go!\n";
    }


    name.append("@gmail.com");
    std::cout<<"Your auto generated email address is the following: "<<name<<std::endl;

    std::cout<<"On the 10th posistion of your name we find the character "<<name.at(10)<<". "<<"Note that the index starts counting from 0"<<std::endl;

    std::cout<<"We automatically have to add an exclamation sign before the user name. Your new user address is: "<<name.insert(0, "!")<<std::endl;

    std::cout<<"We have found the first letter 'a' (if any) at position: "<<name.find("a")<<std::endl;

    std::cout<<"We need to erase all characters from the fifth to the seventh position: "<<name.erase(0,4)<<std::endl;

    std::cout<<"Your new and final user address is: "<<name<<std::endl;


    return 0;
}
**/
