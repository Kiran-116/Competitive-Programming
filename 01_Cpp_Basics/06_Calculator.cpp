#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int num1 = 0;
    int i = 0;

    char ch;

    while (i < str.size() && (str[i] != '+' && str[i] != '-' && str[i] != '*' && str[i] != '/')) {
        num1 = num1 * 10 + (str[i] - '0');
        i++;
    }
    ch = str[i++];
    int num2 = 0;
    while (i < str.size()) {
        num2 = num2 * 10 + (str[i] - '0');
        i++;
    }

    if (ch == '+') {
        cout << num1 + num2 << endl;
    }
    else if (ch == '-') {
        cout << num1 - num2 << endl;
    }
    else if (ch == '*') {
        cout << num1 * num2 << endl;
    }
    else if (ch == '/') {
        cout << num1 / num2 << endl;
    }
}