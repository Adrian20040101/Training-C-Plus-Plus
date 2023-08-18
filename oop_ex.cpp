#include <iostream>
///Car is a class that doesn't use constructors

/**
class Car{
public:
    std::string make;
    std::string model;
    int year;
    std::string color;
    int speed;

    void accelerate()
    {
        std::cout<<"You step on the gas!\n";
        speed += 10;
    }

    void brake()
    {
        std::cout<<"You step on the brakes!\n";
        speed -= 10;
    }
};

///Student is a class that uses constructors
class Student{
public:
    std::string name;
    int age;
    double gpa;

    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }

    void birthday()
    {
        std::cout<<"Happy birthday "<<name<<"! \n";
        std::cout<<"You are now "<<age + 1<<" years old!";
    }
};

///Pizza is a class which uses overloaded constructors, meaning that objects that are instantiated can contain various number of arguments
class Pizza{
public:
    std::string topping1;
    std::string topping2;

    Pizza(){} ///constructor which accepts objects with no arguments
    Pizza(std::string topping1){
        this->topping1 = topping1;
    }
    Pizza(std::string topping1, std::string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

///Stove is a class that uses getters and setters, as well as constructors
class Stove{
private:
    int temperature;
public:
    ///getter
    int getTemperature()
    {
        return temperature;
    }

    ///setter
    void setTemperature(int temperature)
    {
        if(temperature > 30)
        {
            this->temperature = 30;
        }
        else if (temperature < 0)
        {
            this->temperature = 0;
        }
        else
        {
            this->temperature = temperature;
        }
    }

    ///constructor
    Stove(int temperature)
    {
        setTemperature(temperature);
    }
};

///inheritance - build up from a parent class and child classes, example #1
///parent class
class Shape{
public:
    double area;
    double volume;
};

///child class 1
class Cube : public Shape{
public:
    double side;
    Cube(double side)
    {
        this->side = side;
        this->area = side * side * 6;
        this->volume = side * side * side;
    }
};

class Sphere : public Shape{
    public:
    double radius;
    Sphere(double radius)
    {
        this->radius = radius;
        this->area = 4 * 3.14159 * (radius * radius);
        this->volume = (4/3.0) * 3.14159 * (radius * radius * radius);
    }
};

///inheritance - build up from a parent class and child classes, example #2    +    polymorphism(method overriding)
///parent class
class Animal{
private:
    int age;
    std::string color;
protected:                          ///will be accessible only from Dog and Cat class
    std::string name;
public:
    Animal(std::string name, int age, std::string color)
    {
        this->name = name;
        this->age = age;
        this->color = color;
    }

    std::string getName()
    {
        return name;
    }

    void setName(std::string new_name)
    {
        name = new_name;
    }

    int getAge()
    {
        return age;
    }

    void setName(int new_age)
    {
        age = new_age;
    }

    std::string getColor()
    {
        return color;
    }

    void setColor(std::string new_color)
    {
        color = new_color;
    }

    virtual void eating()    ///without virtual here, the last 2 lines displayed when running would be Dob is eating! and Zob is eating!, meaning that the pointers used to
    {                        ///reference the method would point to the original eating() method from Animal
        std::cout<<name<<" is eating!\n";
    }

    void display_information(std::string name, int age, std::string color)
    {
        std::cout<<"Name: "<<name<<std::endl;
        std::cout<<"Age: "<<age<<std::endl;
        std::cout<<"Color: "<<color<<std::endl;
    }
};

class Dog:public Animal{
public:
    std::string breed;

    Dog(std::string name, int age, std::string color, std::string breed) : Animal(name, age, color)
    {
        this->breed = breed;
    }

    void eating()
    {
        std::cout<<name<<" is eating dog food!\n";
    }

    void bark()
    {
        std::cout<<"WOOF WOOF!\n";
    }

    void display_information(std::string name, int age, std::string color, std::string breed)
    {
        std::cout<<"Name: "<<name<<std::endl;
        std::cout<<"Age: "<<age<<std::endl;
        std::cout<<"Color: "<<color<<std::endl;
        std::cout<<"Breed: "<<breed<<std::endl;
    }
};

class Cat:public Animal{
public:
    std::string breed;

    Cat(std::string name, int age, std::string color, std::string breed) : Animal(name, age, color)  ///for constructors of subclasses we specify the arguments passed for the
    {                                                                                                ///constructor of the superclass, this way we only have to handle
        this->breed = breed;                                                                         ///variables specifically declared in the subclass
    }

    void eating()
    {
        std::cout<<name<<" is eating cat food!\n";
    }

    void meow()
    {
        std::cout<<"MEOW MEOW!\n";
    }

    void display_information(std::string name, int age, std::string color, std::string breed)
    {
        std::cout<<"Name: "<<name<<std::endl;
        std::cout<<"Age: "<<age<<std::endl;
        std::cout<<"Color: "<<color<<std::endl;
        std::cout<<"Breed: "<<breed<<std::endl;
    }
};

int main()
{
    Car car1;
    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "black";
    car1.speed = 60;

    std::cout<<"Make: "<<car1.make<<std::endl;
    std::cout<<"Model: "<<car1.model<<std::endl;
    std::cout<<"Year: "<<car1.year<<std::endl;
    std::cout<<"Color: "<<car1.color<<std::endl;
    std::cout<<"Speed: "<<car1.speed<<" km/h"<<std::endl;

    car1.accelerate();
    std::cout<<"Your speed is now "<<car1.speed<<" km/h"<<std::endl<<std::endl;

    Student student1("Bob", 21, 3.2);
    std::cout<<"Name: "<<student1.name<<std::endl;
    std::cout<<"Age: "<<student1.age<<std::endl;
    std::cout<<"GPA: "<<student1.gpa<<std::endl;
    student1.birthday();
    std::cout<<std::endl<<std::endl;

    Pizza pizza1();
    Pizza pizza2 ("Ham");
    Pizza pizza3 ("Pepperoni", "mushrooms");
    std::cout<<pizza2.topping1<<" "<<pizza3.topping2<<std::endl<<std::endl;

    Stove stove(0);
    stove.setTemperature(4);   ///this is how we can modify the value of a private attribute using setter
    std::cout<<"Temperature is "<<stove.getTemperature()<<std::endl<<std::endl;     ///this is how we can access and display a private attribute using getter

    Cube cube(10);
    std::cout<<"Cube's area is "<<cube.area<<std::endl;
    std::cout<<"Cube's volume is "<<cube.volume<<std::endl<<std::endl;

    Sphere sphere(5);
    std::cout<<"Sphere's area is "<<sphere.area<<std::endl;
    std::cout<<"Sphere's volume is "<<sphere.volume<<std::endl<<std::endl;

    Animal animal("Bob", 3, "yellow");
    Dog dog("Dob", 5, "brown", "Labrador");
    Cat cat("Zob", 2, "white", "Persian");
    animal.display_information(animal.getName(), animal.getAge(), animal.getColor());
    dog.display_information(dog.getName(), dog.getAge(), dog.getColor(), dog.breed);
    cat.display_information(cat.getName(), cat.getAge(), cat.getColor(), cat.breed);
    animal.eating();
    dog.eating();
    dog.bark();
    cat.eating();
    cat.meow();
    ///another way to display the use of polymorphism using pointers aka a parent class reference is used to refer to a child class object
    Animal *d = &dog;
    Animal *c = &cat;
    d->eating();
    c->eating();


    return 0;
}
**/
