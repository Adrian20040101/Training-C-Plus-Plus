#include <iostream>

///stucts can store variables of different datatype and can hold default values for them. We can access values by typing name_of_struct.member (a member is a value inside a struct)

struct Person{
std::string name;
int age;
bool married = true;   ///member value has been set to true by default. It can be changed if explicitlly changed, but if not it has an implicit value of true
};
///when we add "&" in the function header, we specify the compiler that we work with the original value of the variable. If we don't use "&", then the programm creates a copy
///of our variable and the compiler might handle it differently in some cases, leading to some errors
void display_person(Person &person)
{
    std::cout<<"Person information: "<<person.name<<" "<<person.age<<" "<<person.married<<std::endl;
}

void change_age(Person &person, int new_age)
{
    person.age = new_age;
    std::cout<<person.name<<"'s age is now "<<person.age;
}
/**
int main()
{
    Person person1;
    person1.name = "Bob";
    person1.age = 21;
    person1.married = false;

    Person person2;
    person2.name = "Dob";
    person2.age = 25;

    display_person(person1);
    change_age(person2, 23);

    ///std::cout<<"Person 1 information: "<<person1.name<<" "<<person1.age<<" "<<person1.married<<std::endl;
    ///std::cout<<"Person 2 information: "<<person2.name<<" "<<person2.age<<" "<<person2.married<<std::endl;
    return 0;
}
**/
