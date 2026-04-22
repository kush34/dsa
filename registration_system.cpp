#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> map;
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        string str;
        cin >> str;
        if (map.find(str) == map.end())
        {
            map[str]++;
            cout << "OK" << endl;
        }
        else
        {
            map[str]++;
            string newUser = str + to_string(map[str]-1);
            map[newUser]++;
            cout << newUser << endl;
        }
    }
}