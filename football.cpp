#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int zCount = 0;
    int vCount = 0;
    bool isBoom = false;
    for (char ch : str)
    {
        if (ch == '1')
        {

            vCount++;
            zCount = 0;
        }
        else
        {
            zCount++;
            vCount = 0;
        }
        if (vCount >= 7 || zCount >= 7){
            cout << "YES" << endl;
            isBoom = true;
            break;
        }
    }
    if(!isBoom) cout << "NO" << endl;
    return 0;
}