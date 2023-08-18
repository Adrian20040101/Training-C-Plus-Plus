#include <iostream>

using namespace std;
class Employee{
    public:
    string name;
    int age;

    Employee(string Name, int Age)
    {
        name = Name;
        age = Age;
    }


    void employee_information()
    {
        cout<<"Name : "<<name<<endl<<"Age : "<<age<<endl;
    }

    void modify_age(int new_age)
    {
        age = new_age;
    }

    void modify_name(string new_name)
    {
        name = new_name;
    }
};

void add_employee()
    {
        string emp_name;
        int emp_age;
        cout<<"Add the new employees name: "<<endl;
        cin>>emp_name;
        cout<<"Add the new employees age: "<<endl;
        cin>>emp_age;
        cout<<"The new employee contains the following informations: "<<emp_name<<", "<<emp_age<<endl;
    }

//int main()
/*{
    Employee employee1 = Employee("Adita", 21);
    employee1.employee_information();
    employee1.modify_age(31);
    employee1.employee_information();
    employee1.modify_name("Adi");
    employee1.employee_information();
    add_employee();

    return 0;
}*/
