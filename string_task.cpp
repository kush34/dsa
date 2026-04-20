#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    string answerStr;
    for (char c : str)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' || c == 'Y' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            continue;
        }
        else
        {
            answerStr += '.';
            answerStr += (char)std::tolower(c); 
        }
    }
    cout<< answerStr << endl;
    return 0;
}