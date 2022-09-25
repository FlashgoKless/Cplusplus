#include <iostream>

int main()
{
	int K, m, N;
	std::cout << "Input day of year in range from 1 to 365: ";
	std::cin >> K;
	std::cout << "\n";
	N = 6;
	std::cout << "\n";
	N = N - 2;
	m = ((K + N) % 7) + 1;
	std::cout << "Number of week day:" << m;
}