#include <iostream>

int Read_Line()
{
    int current;
    std::cin >> current;
    return current;
}
bool Year_check(int user_year)
{
    if (user_year % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() {
    std::cout << "Hello, this is calculator by Gosama" << std::endl;
    std::cout << "Enter the code you want to check for leap years" << std::endl;

    int user_year = Read_Line();
    if (Year_check(user_year))
    {
        std::cout << user_year << " - is a leap year" << std::endl;
    }
    else
    {
        std::cout << user_year << " - is not a leap year" << std::endl;
    }
    return 0;
}
