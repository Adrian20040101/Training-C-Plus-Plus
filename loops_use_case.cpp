#include <iostream>

///there are 3 ways you can loop through iterables: while, do while and for
///while is a way to loop until a certain condition is met. Good use case would be forcing the user to type an input tat you desire
///do while loop is used to verify if a condition is met before starting to loop until a certain condition is met. Good use case would be determining if a user wants to play a game again
///for is a way to loop a specified amount of times. Good use case would be for countdowns

///here are examples for each loop methods:
/**int main()
{
   ///while
   int number;
   std::cout<<"Enter a positive number: ";
   std::cin>> number;
   while (number < 0)
   {
       std::cout<<"You have entered an invalid number! Enter a positive value: ";
       std::cin>>number;
   }
   std::cout<<"Your number is: "<<number<<std::endl;

   ///do while - a more efficient way to write the while loop from above
   do
   {
       std::cout<<"Enter a positive value: ";
       std::cin>>number;
   }while(number<0);

   std::cout<<"Your number is: "<<number<<std::endl;

   ///for
   for (int i = 10; i > 0; i--)
   {
       std::cout<<i<<std::endl;
   }
   std::cout<<"Happy New Year!"<<std::endl;

   return 0;
}**/


