#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    bool firstLowerCase = islower(str[0]);
    // cout << "isFirstLowerCase" << firstLowerCase << endl;
    int uCount = 0;
    int lCount = 0;
    for (char ch : str)
    {
        if (isupper(ch))
        {
            uCount++;
        }
        else
        {
            lCount++;
        }
    }
    // cout << " lCount" << lCount << " uCount" << uCount << endl;
    if (((uCount == str.size() - 1) && firstLowerCase) || uCount == str.size())
    {
        for (int i = 0; i < str.length(); i++)
        {
            if(islower(str[i])){
                str[i] = toupper(str[i]);
            }else{
                str[i] = tolower(str[i]);
            }
        }
    }
    for (char ch : str)
        cout << ch;
    cout << endl;
    return 0;
}