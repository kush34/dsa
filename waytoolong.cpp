#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int words;
    cin >> words;
    vector<string> strArr;

    for (int i = 0; i < words; i++)
    {
        string newStr;
        cin >> newStr;
        strArr.push_back(newStr);
    }
    for (int i = 0; i < words; i++)
    {
        string str = strArr[i];
        if (str.size() <= 10)
        {
            cout << str<<endl;
        }
        else
        {
            int strLen = str.size() - 2;
            cout << str[0] << strLen << str[str.size() - 1]<<endl;
        }
    }
}