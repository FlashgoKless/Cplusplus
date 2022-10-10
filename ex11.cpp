#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    int i, num;
    char char_1 = ',';
    char char_2 = '.';
    char char_3 = ':';
    char char_4 = ';';
    char char_5 = '!';
    char char_6 = '?';

    cout << "Введите строку: \n";
    cin >> s;

    num = 0;

    for (i = 0; i <= s.length(); i++) {
        if (s[i] == char_1) {
            num++;
        }
        else if (s[i] == char_2) {
            num++;
        }
        else if (s[i] == char_3) {
            num++;
        }
        else if (s[i] == char_4) {
            num++;
        }
        else if (s[i] == char_5) {
            num++;
        }
        else if (s[i] == char_6) {
            num++;
        }
    }

    cout << "Число знаков препинания: " << num;
}
