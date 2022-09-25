
#include <iostream>

int main()
{
    int year;
    std::cout << "Input number of a year (>0): ";
    std::cin >> year;
    int days = (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) ? 366 : 365;

    std::cout << "Number of days in this year: " << days << std::endl;

    return 0;
}
