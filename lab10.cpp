﻿#include <iostream>
using namespace std;
int main()
{
    system("chcp 1251");
    string s;
    cin >> s;
    int k;
    cin >> k;
    while (k--) {
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] > char(224) && s[i] <= char(255))
                s[i] = char(int(s[i]) - 1);
            else if (s[i] > char(192) && s[i] <= char(223))
                s[i] = char(int(s[i]) - 1);
            else if (s[i] == char(224))
                s[i] = 'я';
            else if (s[i] == char(192))
                s[i] = 'Я';
        }
    }
    cout << s;
    return 0;
}