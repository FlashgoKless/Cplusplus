#include <iostream>

int main()
{
    int a;
    std::cout << "Input value of variable A: ";
    std::cin >> a;
    std::cout << "A^2: ";
    std::cout << a * a;
    std::cout << "\nA^3: ";
    std::cout << a * a * a;
    std::cout << "\nA^5: ";
    int a1 = a * a * a * a * a;
    std::cout << a1;
    std::cout << "\nA^10: ";
    int a2 = a1 * a * a * a * a * a;
    std::cout << a2;
    std::cout << "\nA^15: ";
    std::cout << a2 * a * a * a * a * a;
}
