
#include <iostream>

int main()
{
    int year;
    std::cout << "Input number of a year (>0): ";
    std::cin >> year;
    if ((year % 100) == 0) {
        if ((year % 400) == 0) {
            std::cout << "Number of days in this year: 366" << std::endl;
        } else {
            std::cout << "Number of days in this year: 365" << std::endl;
        } 
    } else if ((year % 4) == 0) {
        std::cout << "Number of days in this year: 366" << std::endl;
    } else {
        std::cout << "Number of days in this year: 365" << std::endl;
    }

    return 0;
}
