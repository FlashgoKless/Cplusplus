

#include <iostream>

int main()
{
    double x, y;
    bool answer;
    std::cout << "Enter coordinates of a point." << std::endl << "Enter X: ";
    std::cin >> x;
    std::cout << "Enter Y: ";
    std::cin >> y;
    answer = x > 0 && y > 0 || x < 0 && y < 0;
    std::cout << "Point with coordinates X, Y in 3 or 4 coordinate qurter: " << std::boolalpha << answer << std::endl;
    return 0;
}

