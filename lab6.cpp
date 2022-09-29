#include <iostream>

int main()
{
    int N;
    std::cout << "Enter integer number: ";
    std::cin >> N;
    double A = 2;
    for (int i = 1; i <= N; ++i) {
        A = 2 + 1 / A;
        std::cout << A << " ";
    }
    std::cout << std::endl;
    system("pause");
    return 0;
}