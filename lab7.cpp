#include <iostream>

int main()
{
    float e;
    std::cout << "Enter number e:";
    std::cin >> e;
    float ak1 = 1, ak = 2, ak2;
    int k = 2;
    while (fabs(ak - ak1) >= e) {
        ak2 = ak1;
        ak1 = ak;
        ak = (ak2 + 2 * ak1) / 3;
        ++k;
    }
    std::cout << "k:" << k << std::endl << "A(k-1):" << ak1 << std::endl << "Ak:" << ak;

    return 0;
}

