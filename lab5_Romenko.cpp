// lab5_Romenko.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <clocale>
#include <string>

int main()
{
    std::setlocale(LC_CTYPE, "rus");
    int n;
    std::string str_1;
    std::string str_2;
    std::cout << "Введите число: ";
    std::cin >> n;
    std::cout << "Число букв: " << " ";

    if (n < 0) {
        std::cout << "Минусовое число";
    }

    switch ((n % 100) / 10)
    {
    case 2: str_1 = "двадцать"; break;
    case 3: str_1 = "тридцать"; break;
    case 4: str_1 = "сорок"; break;
    case 5: str_1 = "пятдесят"; break;
    case 6: str_1 = "шестьдесят"; break;
    case 7: str_1 = "Семьдесят"; break;
    case 8: str_1 = "Восемьдесят"; break;
    case 9: str_1 = "Девяносто"; break;
    }

    if (n % 100 >= 10 & n % 100 < 20) {
        switch (n % 100) {
        case 10: str_1 = "десять"; break;
        case 11: str_1 = "одинадцать"; break;
        case 12: str_1 = "двенадцать"; break;
        case 13: str_1 = "тринадцать"; break;
        case 14: str_1 = "четырнадцать"; break;
        case 15: str_1 = "пятнадцать"; break;
        case 16: str_1 = "шестнадцать"; break;
        case 17: str_1 = "семнадцать"; break;
        case 18: str_1 = "восемнадцать"; break;
        case 19: str_1 = "девятнадцать"; break;
        }
    }
    else {
        switch (n % 10)
        {
        case 0: str_2 = "ноль"; break;
        case 1: str_2 = "один"; break;
        case 2: str_2 = "два"; break;
        case 3: str_2 = "три"; break;
        case 4: str_2 = "четыре"; break;
        case 5: str_2 = "пять"; break;
        case 6: str_2 = "шесть"; break;
        case 7: str_2 = "семь"; break;
        case 8: str_2 = "восемь"; break;
        case 9: str_2 = "девять"; break;
        }
    }
    std::cout << str_1.length() + str_2.length();
    return 0;
}