// File name: exercise_5
// Author: Wang Pengyu
// Create date: 2025-06-21
// Description: a recursive function
#include <iostream>

long long factorial(unsigned long long);
long long factorial(unsigned long);
long long factorial(unsigned int);

int main()
{
    unsigned int x;
    long long result;
    std::cout << "Please enter a number: ";
    std::cin >> x;
    while (std::cin.fail())
    {
        std::cin.clear();
        while(std::cin.get() != '\n')
            continue;
        std::cout << "Please enter a legal number: ";
        std::cin >> x;
    }
    result = factorial(x);
    std::cout << "The factorial of " << x 
    << "(" << x << "!)"
    << " is: " << result << std::endl;
    std::cin.get();
    std::cin.get();
    return 0;
}


long long factorial(unsigned long long x)
{
    long long result;
    if (x <= 1)
        result = 1;
    else
        result = x * factorial(x - 1);
    return result;
}


long long factorial(unsigned long x)
{
    long long result;
    if (x <= 1)
        result = 1;
    else
        result = x * factorial(x - 1);
    return result;
}


long long factorial(unsigned int x)
{
    long long result;
    if (x <= 1)
        result = 1;
    else
        result = x * factorial(x - 1);
    return result;
}