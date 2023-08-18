#include <iostream>
#include <iomanip>

double getTotal(double prices[], int size_of_array)
{
    double total = 0;
    for (int i = 0; i < size_of_array; i++)
    {
        total += prices[i];
    }
    return total;
}

int searchArray(int numbers[], int size_of_array2, int myNum)
{
    int index = 0;
    for (int i = 0; i < size_of_array2; i++)
    {
        if (numbers[i] == myNum)
        {
            std::cout<<"The element "<<myNum<<" has benn found on position "<<index<<'\n';
            break;
        }
        else
        {
            index++;
        }
    }
    if (index == size_of_array2 && numbers[size_of_array2] != myNum)
        {
            std::cout<<"The number you're looking for doesn't appear in the array!\n";
        }
}

void bubble_sort(int numbers[], int size_of_array2)
{
    for (int i = 0; i < size_of_array2 - 1; i++)
        for (int j = 0; j < size_of_array2 - i - 1; j++)
            if (numbers[j] > numbers[j + 1])
                {
                    int temp = numbers[j];
                    numbers[j] = numbers[j + 1];
                    numbers[j + 1] = temp;
                }

    for (int i = 0; i < size_of_array2; i++)
    {
        std::cout<<numbers[i]<<" ";
    }
}
/**
int main()
{
    double prices[] = {49.99, 8.76, 9.99, 54.67};
    int size_of_array = sizeof(prices)/sizeof(double);
    double total = getTotal(prices, size_of_array);
    std::cout<<"The total is $"<<std::setprecision(2)<<std::fixed<<total<<std::endl;
    int numbers[] = {10, 9, 5, 3, 1, 2, 4, 7, 8, 6};
    int size_of_array2 = sizeof(numbers)/sizeof(int);
    int myNum = 0;
    std::cout<<"Enter an element that you want to search for: ";
    std::cin>>myNum;
    searchArray(numbers, size_of_array2, myNum);

    std::cout<<"Sorted array: ";
    bubble_sort(numbers, size_of_array2);
    return 0;
}
**/
