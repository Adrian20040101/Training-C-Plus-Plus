///break is used to force stop the loop and exit it

///continue is used to skip the current iteration

///if we include the ctime directive then we can work with srand(time(null)); which is a total random number
///pseudo-random values (not truly random) can be accesed also with the following code (supposedly we need a dice roll programm):
///int dice_roll = (rand() % 6) + 1; - it wil display a number between 1 and 6

///when you write a function that returns something, make sure that the functions datatype and the returned elements data type match, for example
///double function( double lenght )
///{
///     return lenght*lenght;
///}

///overloaded functions share the same name as the original function but have different paramters and when called, dont behave like the initial function,
///meaning that the code from the initial function gets overwritten - function_name + parameters = function signature (each function signature has to be unique)

///local variables are used within a function, while global variables are declared at the top of the programm and are accessible to all functions in the programm
///when we work with a function and have declared a variable both local and global, and we want to access the global value, we simply add :: in front of it,i.e:
/// std::cout<< ::variabile_declared_both_local_and_global - it will display the value of the global variable that has been declared

///exercises within this project have some parts of them commented because of some repetitive namings of functions which are present in multiple files, leading
///to some redeclaration errors. When you want to compile certain files, simply decomment them one at a time

///arrays are datastructures that can hold multiple values. Below is an examle of declaration and use of an array to display elements inside of it:
/**
    double prices[] = {2.45, 3.12, 6.78, 4.65, 9.34};
    for (int i = 0; i < 5; i++)
    std::cout<<prices[i]<<'\n';
**/
///you can also specify items of an array later like this : datatype array_name[size]; array_name[0] = value; array_name[1] = value; etc
///arrays can only hold elements of the same datatype, so something like double prices[] = {2.45, 5.6, "some price", 6.79} will print out an error

///sizeof() operator will return the size in Bytes of a datastructure (variable, class, object, data type), for example sizeof(double) = 8 Bytes
///it can be useful to determine the lenght of an array of any type, for example char grades = ['A', 'B', 'C', 'D', 'F']
///if you type std::cout<<sizeof(grades)/sizeof(datatype_of_grades(here char)) - then this will print out 5, meaning there are five elements in this array, since
///the size of a char is 1, then an array of 5 chars will have a size of 5
///when we want to iterate through an array, this is the best solution:
/**
    double prices[] = {2.45, 3.12, 6.78, 4.65, 9.34};
    for (int i = 0; i < sizeof(prices)/sizeof(double); i++)
    std::cout<<prices[i]<<'\n';
**/
///this way, whenever the number of elements in that array is modified, you dont have to specifically change when the iteration should stop
///another good is example of iteration through an array is with a foreach loop, that looks like this:
///for (datatype_of_the_array price: prices){
///std::cout<<price<<'\n' }

///fill function - fills an array with a specified value. It has the following syntax : fill(begin, end, value)
///for example if we have an array food that we'd like to fill in with pizza 100 times, we'd type:
///std::string foods[100] - this way we declare the string and also specify the dimension of the array
///fill(foods, foods + dimension of string (here 100), "pizza") - this is an example of a use case for fill. If we print this it will result in writing "pizza"
///100 times

///to put user input into an array, you place the cin method inside a for loop

///to access the address of a variable type &variable_name

///const parameters are variables which content is read-only within a function, meaning you can't set another value for them

///pointers are variables that store the memory address of another variable
/// & = address of operator
/// * = dereference operator (used before a pointer to be able to display the value stored at that memory address)
///nullpointer is a pointer that has no value, it doesn't point to anything
///nullptr = null pointer literal, these are helpful to determine if an address was succesfully assigned to a pointer. Here is an example of an use case:
/**
    int *pointer = nullptr;
    int x = 123;
    pointer = &x; -> in this line we assign the pointer to the address of the variable x
    if (pointer == nullptr)
    {
        std::cout<<"Your address has not been assigned\n";
    }
    else
    {
        std::cout<<"Your address has been assigned\n";
    }
**/
///in this case, the address has been assigned (line 3 from the example above), so it will print out the message from the else statement
///if line 3 from the example above wouldn't have existed, the programm would've printed out the message from the if statement

///dynamic memory - by using the operator "new", we store variables on the heap rather than on the stack. Useful when we don't know how much memory we need.
///Here is an example of an use case:
/**
    int *pNum = NULL;
    pNum = new int;     -> this line represents how you can dynamically create a new int. It works with any datatype
    *pNum = 21;
    std::cout<<"addres: "<<pNum<<'\n';   -> this will print the address that the variable is stored at
    std::cout<<"value: "<<*pNum<<'\n';   -> this will print the value located at the memory address where the pointer is pointing at
    delete pNum;    -> it frees the memory location to avoid any memory leaks
**/
///dynamic memory is also used for example when dealing with an array and we want to know the size of this array, so that we can enter an exact size value and not waste memory:
/**
    char *pGrades = NULL;
    int size;
    std::cout<<"How many grades to enter in? ";
    std::cin>>size;
    pGrades = new char[size];     -> these lines represent how you can dynamically allocate memory using users input, to avoid wasting memory
    for (int i = 0; i < size; i++)
    {
        std::cout<<"Enter grade #"<<i + 1<<": ";
        std::cin>>pGrades[i];
    }
    for (int i = 0; i < size; i++)
    {
        std::cout<<pGrades[i]<<" ";
    }
    delete[] pGrades;    -> it frees the memory location to avoid any memory leaks
**/
///with function template we can disguise a function, such that it can be whatever datatype we need it to be. A use case would be a max function, where we don't know
///if the numbers are gonna be integers or not. To create something like this, we use a common naming convention T and a template, as such:
///template <typename T>
///T max(T x, T y)   ->this is a function header
///if for this example x and y are different data types, such as int and double then we would need to add another typename to the template: template = <typename T, typename U>
///then the function header would look like this : auto max(T x, U y)  -> auto operator will determine which datatype would be best to display in the given scenario

///in oop there are 3 access methods for variables : public, private and protected.
///public - it can be accessed anywhere in the programm, even outside the class
///private - it can't be accessed outside the class, for that you'll need getters and setters, which are public methods within the class
///protected - it's somewhere in between public and private. It can't be accessed anywhere else in the programm, but only in classes which inherit from this class
///virtual - operator used before specifying a method's name to tell the programm to look for other implementations of that method. Great for working with polymorphism in oop
